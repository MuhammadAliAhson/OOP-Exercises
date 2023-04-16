#pragma once
#include<iostream>
using namespace std;

class Time {
private:
    int months;
    int days;
    int weeks;
    int hours;
    int minutes;
    int seconds;
public:
    Time() : months(0), days(0), weeks(0), hours(0), minutes(0), seconds(0)
    {

    }

    Time(int hours, int minutes, int seconds) : months(0), weeks(0), days(0) {

        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;

    }

    void setData() {
        cout << "please enter the value of the hours " << endl;
        cin >> hours;
        cout << "please enter the value of the minutes " << endl;
        cin >> minutes;
        cout << "please enter the value of the seconds" << endl;
        cin >> seconds;

    }
    void getData() {
        cout << hours << ": " << minutes << " : " << seconds << " : " << endl;
    }
    void calculateTime(Time);
    void calculateDays();
    int retSeconds();
    int retMinutes();
    int retHours();
};