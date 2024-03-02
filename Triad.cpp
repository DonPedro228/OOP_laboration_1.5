#include "Triad.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Triad::Triad() {
    date[0] = 1;
    date[1] = 1;
    date[2] = 1;
}

Triad::Triad(int day, int month, int year) {
    date[0] = day;
    date[1] = month;
    date[2] = year;
}

void Triad::IncrementFields() {
    date[0]++;

    if (date[0] > 31) {
        date[0] = 1;
        date[1]++;

        if (date[1] > 12) {
            date[1] = 1;
            date[2]++;
        }
    }
}

int Triad::getDay() const {
    return date[0];
}

int Triad::getMonth() const {
    return date[1];
}

int Triad::getYear() const {
    return date[2];
}

void Triad::setDay(int day) {
    date[0] = day;
}

void Triad::setMonth(int month) {
    date[1] = month;
}

void Triad::setYear(int year) {
    date[2] = year;
}

void Triad::Init(int day, int month, int year) {
    date[0] = day;
    date[1] = month;
    date[2] = year;
}

void Triad::Display() const {
    cout << endl;
    cout << "Date: " << date[0] << "/" << date[1] << "/" << date[2] << endl;
}

void Triad::Read() {
    int day, month, year;
    cout << "Input date: ";
    cin >> day >> month >> year;

    Init(day, month, year);
}

string Triad::toString() const {
    stringstream sout;
    sout << getDay() << "/" << getMonth() << "/" << getYear();
    return sout.str();
}