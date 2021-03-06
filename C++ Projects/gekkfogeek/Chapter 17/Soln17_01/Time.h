// Exercise 17.1 Time.h
// Definition of Time class

#ifndef TIME_H
#define TIME_H
#include <iostream>

class Time
{
private:
  int hours {};
  int minutes {};
  int seconds {};

  public:
  Time() = default;
  Time(int h, int m, int s);
  int getHours()const { return hours; }
  int getMinutes()const { return minutes; }
  int getSeconds()const { return seconds; }
};

std::ostream& operator <<(std::ostream& out, const Time& rT); // Overloaded insertion operator declaration

#endif //TIME_H