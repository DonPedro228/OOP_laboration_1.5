#pragma once
#include "Triad.h"

class Date {
private:
    Triad date;
public:
    Date();
    Date(int day, int month, int year);
    void IncrementField();
    void IncrementDate(int p);
    void Init(int day, int month, int year);
    void Display() const;
    void Read();
    string toString() const;
};