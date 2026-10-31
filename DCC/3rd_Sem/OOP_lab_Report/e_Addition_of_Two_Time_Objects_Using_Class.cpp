#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void putTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;

        seconds = seconds % 60;
        minutes = minutes % 60;
    }

    void getTime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.putTime(2, 45, 30);
    t2.putTime(3, 30, 40);

    t3.add(t1, t2);

    t1.getTime();
    t2.getTime();
    t3.getTime();

    return 0;
}