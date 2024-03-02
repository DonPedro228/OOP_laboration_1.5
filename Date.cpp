#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Date::Date() {}

Date::Date(int day, int month, int year) : date(day, month, year) {}

void Date::IncrementField()
{
    date.IncrementFields();
}

void Date::IncrementDate(int p) {
    for (int i = 0; i < p; ++i) {
        date.IncrementFields();
    }
}

void Date::Init(int day, int month, int year) {
    date = Triad(day, month, year);
}

void Date::Display() const {
    date.Display();
}

void Date::Read() {
    date.Read();
}

string Date::toString() const {
    return date.toString();
}