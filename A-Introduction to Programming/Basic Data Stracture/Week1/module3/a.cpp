#include <iostream>
using namespace std;

int main()
{
    int Number[10] = {1, 5, 4, 23, 8, 65, 2, 7, 80, 25};
    int min = Number[0];
    int max = Number[0];

    for(int i = 0; i < 10; i++)
    {
        if (Number[i] > max)
        {
            max = Number[i];
        }
        else if(Number[i] < min)
        {
            min = Number[i];
        }
    }

    cout << "min:" << min << endl;
    cout << "max:" << max << endl;
    return 0;
}