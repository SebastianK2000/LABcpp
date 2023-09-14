#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int remainingDays;
    if ((ltm->tm_year % 4 == 0 && ltm->tm_year % 100 != 0) || (ltm->tm_year % 400 == 0)) {
        // Rok przestêpny
        remainingDays = 366 - ltm->tm_yday;
    } else {
        // Rok nieprzestêpny
        remainingDays = 365 - ltm->tm_yday;
    }

    int remainingHours = 23 - ltm->tm_hour;
    int remainingMinutes = 59 - ltm->tm_min;
    int remainingSeconds = 59 - ltm->tm_sec;

    cout << "Do sylwestra zostalo:" << endl;
    cout << remainingDays << " dni" << endl;
    cout << remainingHours << " godzin" << endl;
    cout << remainingMinutes << " minut" << endl;
    cout << remainingSeconds << " sekund" << endl;

    return 0;
}
