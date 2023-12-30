#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {
    cout << "REMINDER" << endl;
    cout << "ENTER HOUR: ";
    int hour;
    cin >> hour;
    cout << "ENTER MINUTES: ";
    int min;
    cin >> min;

    int seconds_until_time = hour * 3600 + min * 60;

    while (true) {
        time_t now = time(nullptr);
        struct tm timeinfo = *localtime(&now);

        int current_seconds = timeinfo.tm_hour * 3600 + timeinfo.tm_min * 60 + timeinfo.tm_sec;

        if (current_seconds >= seconds_until_time) {
            cout << "It's time!" << endl;
            break;
        }

        sleep(10); 
    }

    return 0;
}
