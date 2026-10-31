#include <iostream>
using namespace std;

int main()
{
    int d[100], n, item, loc = -1;

    cout << "Enter the number of elements:";
    cin >> n;

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    cout << "Enter the item to search: ";
    cin >> item;

    for (int i = 0; i < n; i++)
    {
        if (item == d[i])
            loc = i;
        break;
    }

    if (loc == -1)
        cout << "Item not found" << endl;
    else
        cout << "Item found in Location : " << loc << endl;

    return 0;
}

// Enter the number of elements:5
// Enter the Elements:
// 1 5 9 8 4
// Enter the item to search: 9
// Item found in Location : 2