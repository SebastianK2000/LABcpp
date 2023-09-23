// jednokierunkowe

#include <iostream>

template <typename T>
class List {
private:
    struct Node {
        T data;
        Node* next;

        Node(T data) : data(data), next(nullptr) {}
    };

    Node* head;
    int size;

public:
    List() : head(nullptr), size(0) {}

    ~List() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void push_front(T data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        size++;
    }

    void pop_front() {
        if (head == nullptr) {
            return;
        }
        Node* tmp = head;
        head = head->next;
        delete tmp;
        size--;
    }

    T front() const {
        return head->data;
    }

    bool empty() const {
        return head == nullptr;
    }

    int get_size() const {
        return size;
    }

    void print() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};
int main() {
    List<int> list;

    list.push_front(3);
    list.push_front(2);
    list.push_front(1);

    list.print(); // wypisze "1 2 3"

    list.pop_front();

    std::cout << "Size: " << list.get_size() << std::endl; // wypisze "Size: 2"

    std::cout << "Front: " << list.front() << std::endl; // wypisze "Front: 2"

    return 0;
}