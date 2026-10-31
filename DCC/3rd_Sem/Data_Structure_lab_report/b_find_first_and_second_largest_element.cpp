#include <iostream>
using namespace std;

int main()
{
    int d[100], n, first, second, loc1, loc2;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    first = d[0], second = d[1];
    loc1 = 0, loc2 = 1;

    if (first < second)
    {
        swap(first, second);
        swap(loc1, loc2);
    }

    for (int i = 2; i < n; i++)
    {
        if (d[i] > first)
        {
            second = first;
            first = d[i];

            loc2 = loc1;
            loc1 = i;
        }
        else if (d[i] > second)
        {
            second = d[i];
            loc2 = i;
        }
    }
    cout << "Largest element " << first << " Location " << loc1 << endl;
    cout << "econd Largest element " << second << " Location " << loc2 << endl;

    return 0;
}

// Enter the number of elements: 10
// Enter the Elements:
// 1 5 6 9 8 5 10 100 0 6
// Largest element 100 Location 7
// econd Largest element 10 Location 6