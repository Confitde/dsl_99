#include <iostream>
using namespace std;

int main() {
    int a[50], n, ch, pos, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (1) {
        cout << "\n1.Display\n2.Maximum\n3.Minimum\n4.Insert\n5.Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        if (ch == 1) {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        else if (ch == 2) {
            int max = a[0];
            for (int i = 1; i < n; i++)
                if (a[i] > max)
                    max = a[i];
            cout << "Maximum = " << max;
        }
        else if (ch == 3) {
            int min = a[0];
            for (int i = 1; i < n; i++)
                if (a[i] < min)
                    min = a[i];
            cout << "Minimum = " << min;
        }
        else if (ch == 4) {
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;

            for (int i = n; i >= pos; i--)
                a[i] = a[i - 1];

            a[pos - 1] = val;
            n++;
            cout << "Inserted";
        }
        else if (ch == 5) {
            break;
        }
        else {
            cout << "Invalid choice";
        }
    }
    return 0;
}