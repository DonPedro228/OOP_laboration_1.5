#pragma once
#include <string>
using namespace std;

class Triad
{
private:
	int date[3];
public:
    Triad();
    Triad(int day, int month, int year);
    void IncrementFields();
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void Init(int day, int month, int year);
    void Display() const;
    void Read();
    string toString() const;
};