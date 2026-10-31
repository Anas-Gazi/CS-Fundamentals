#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d[100];
    cout << "Enter number of Element: ";
    cin >> n;
    cout << "Enter Element: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int ptr = 1;
        while (ptr <= n - i)
        {
            if (d[ptr] > d[ptr + 1])
            {
                swap(d[ptr], d[ptr + 1]);
            }
            ptr++;
        }
    }
    cout << "Sorted array: ";
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}