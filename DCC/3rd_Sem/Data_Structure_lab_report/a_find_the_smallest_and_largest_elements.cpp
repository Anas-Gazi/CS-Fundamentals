#include <iostream>
using namespace std;

int main()
{
    int d[100], n;

    int k, small, large;
    cout << "Enter the number of elements:";
    cin >> n;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    k = 0;
    small = d[0];
    large = d[0];
    while (k < n)
    {

        if (small > d[k])
            small = d[k];
        if (large < d[k])
            large = d[k];
        k++;
    }
    cout << "Smallest element is: " << small << endl;
    cout << "Largest element is: " << large << endl;

    return 0;
}

// Enter the number of elements:10
// Enter the Elements:
// 1 5 6 9 8 5 10 100 0 6
// Smallest element is: 0
// Largest element is: 100