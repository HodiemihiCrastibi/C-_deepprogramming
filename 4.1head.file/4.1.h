#pragma once
class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time(int h, int m, int s);
    int toSeconds() const;
    void printTime() const;
};