#include <iostream>
#include <queue>
#include <string>

struct Ticket {
    int ticketNumber;
    std::string passengerName;
    std::string travelDate;
};

struct Train {
    int trainNumber;
    std::string departureStation;
    std::string arrivalStation;
    std::string departureTime;
    std::string arrivalTime;
};

void reserveTicket(std::queue<Ticket>& ticketQueue) {
    Ticket newTicket;
    std::cout << "Enter ticket number: ";
    std::cin >> newTicket.ticketNumber;
    std::cin.ignore();

    std::cout << "Enter passenger name: ";
    std::getline(std::cin, newTicket.passengerName);

    std::cout << "Enter travel date: ";
    std::getline(std::cin, newTicket.travelDate);

    ticketQueue.push(newTicket);
    std::cout << "Ticket reserved successfully.\n";
}

void addTrainToSchedule(std::queue<Train>& trainSchedule) {
    Train newTrain;
    std::cout << "Enter train number: ";
    std::cin >> newTrain.trainNumber;
    std::cin.ignore();

    std::cout << "Enter departure station: ";
    std::getline(std::cin, newTrain.departureStation);

    std::cout << "Enter arrival station: ";
    std::getline(std::cin, newTrain.arrivalStation);

    std::cout << "Enter departure time: ";
    std::getline(std::cin, newTrain.departureTime);

    std::cout << "Enter arrival time: ";
    std::getline(std::cin, newTrain.arrivalTime);

    trainSchedule.push(newTrain);
    std::cout << "Train added to the schedule successfully.\n";
}

void displayConnections(const std::queue<Train>& trainSchedule) {
    if (trainSchedule.empty()) {
        std::cout << "No trains in the schedule.\n";
        return;
    }

    std::cout << "Available connections:\n";
    int count = 1;

    std::queue<Train> tempSchedule = trainSchedule;
    while (!tempSchedule.empty()) {
        const Train& train = tempSchedule.front();
        std::cout << "Connection " << count << ":\n";
        std::cout << "Train number: " << train.trainNumber << "\n";
        std::cout << "Departure station: " << train.departureStation << "\n";
        std::cout << "Arrival station: " << train.arrivalStation << "\n";
        std::cout << "Departure time: " << train.departureTime << "\n";
        std::cout << "Arrival time: " << train.arrivalTime << "\n\n";
        tempSchedule.pop();
        count++;
    }
}

int main() {
    std::queue<Ticket> ticketQueue;
    std::queue<Train> trainSchedule;

    int choice;
    bool exit = false;

    while (!exit) {
        std::cout << "========== Railway System ==========\n";
        std::cout << "1. Reserve a ticket\n";
        std::cout << "2. Add train to the schedule\n";
        std::cout << "3. Display available connections\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                reserveTicket(ticketQueue);
                break;
            case 2:
                addTrainToSchedule(trainSchedule);
                break;
            case 3:
                displayConnections(trainSchedule);
                break;
            case 4:
                exit = true;
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

        std::cout << "\n";
    }

    return 0;
}


