#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100], n, item;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    cin >> item;

    int beg = 0, end = n - 1, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (a[mid] == item)
        {
            cout << "Item found at position: " << mid << endl;
            return 0;
        }
        else if (item > a[mid])
            beg = mid + 1;
        else if (item < a[mid])
            end = mid - 1;
    }

    cout << "Item not found" << endl;
    return 0;
}