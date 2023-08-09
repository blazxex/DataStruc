#include <iostream>

using namespace std;



int main() {
    int hr, mins, ip;
    cin >> hr >> mins >> ip;

    int totalMin = hr * 60 + mins + ip;
    int newHour = (totalMin / 60) % 24;
    int newMin = totalMin % 60;

    cout << (newHour < 10 ? "0": "")<<newHour << " " << (newMin < 10? "0": "")<<newMin;

    return 0;
}
