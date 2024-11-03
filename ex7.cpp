#include <iostream>
#include <string>
using namespace std;

void parseDateTime(string Dtae_Time) {
    string Day = Dtae_Time.substr(0, 3);
    string month = Dtae_Time.substr(3, 3);
    string Year = Dtae_Time.substr(4, 4);
    string Hour = Dtae_Time.substr(8, 3);
    string Minute = Dtae_Time.substr(10, 3);

    cout << "Date: " << Day << "/" << month << "/" << Year << endl;
    cout << "Time: " << Hour << ":" << Minute << endl;
}

int main() {
    string Dtae_Time = "010920091123";
    parseDateTime(Dtae_Time);

    return 0;
}
