#include<iostream>
#include"Constructor2.h"
using namespace std;

void Time::calculateTime(Time obj1) {
    int addsec = 0,addmin=0;
    Time fol;
    fol.minutes = obj1.minutes + minutes;
    fol.hours = obj1.hours + hours;
    fol.seconds = obj1.seconds + seconds;
    if (fol.seconds > 60) {
        addsec = fol.seconds / 60;
        seconds = fol.seconds % 60;
    
    }
    else if (fol.seconds < 60) {
        seconds = fol.seconds;
    }
    fol.minutes += addsec;
    if (fol.minutes == 0) {
        minutes = fol.minutes ;
    }
    else if (fol.minutes != 0 && fol.minutes >=60) {
        addmin = fol.minutes / 60;
        minutes = fol.minutes % 60;
    }
    fol.hours += addmin;
    
        hours = fol.hours;

}
void Time::calculateDays() {

    hours = 11;






    
    Time obj1;
    calculateTime(obj1);
    int newtemp = 0;
    int newtemp1;
    newtemp = obj1.hours / 24;
    if (newtemp > 24) {
        newtemp1 = obj1.hours % 24;
        obj1.days = obj1.days + newtemp1;
        obj1.days = obj1.days - newtemp1;
    }
    newtemp = obj1.days / 7;
    if (newtemp > 0) {
        newtemp1 = obj1.days % 7;
        obj1.weeks = obj1.weeks + newtemp1;
        obj1.days = obj1.days - newtemp1 * 7;
    }
    newtemp = obj1.weeks / 4;
    if (newtemp > 0) {
        newtemp1 = obj1.weeks % 4;
        obj1.months = obj1.months + newtemp1;
        obj1.weeks = obj1.weeks - newtemp1 * 4;
    }
    
}
int Time::retSeconds() { return this->seconds; }
int Time::retMinutes() { return this->minutes; }
int Time::retHours() { return this->hours; }