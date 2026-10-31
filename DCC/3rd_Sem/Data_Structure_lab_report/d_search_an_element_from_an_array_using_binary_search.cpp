
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int d[100], n, item;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    sort(d, d + n);

    cout << "Enter item to search: ";
    cin >> item;

    int beg = 0, end = n - 1;
    int mid;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (d[mid] == item)
        {
            cout << "Item found at location: " << mid << endl;
            return 0;
        }
        else if (item < d[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    cout << "Item not found" << endl;

    return 0;
}

// Enter the number of elements:5
// Enter the Elements:
// 20 34 54 70 76
// Enter item to search: 54
// Iteam found at location: 2