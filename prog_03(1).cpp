#include<iostream>
using namespace std;

int main()
{
    int a[100], n, i, choice, key, pos = -1;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"\n1 Linear Search";
    cout<<"\n2 Binary Search";
    cout<<"\nEnter your choice: ";
    cin>>choice;

    cout<<"Enter element to search: ";
    cin>>key;
    if(choice == 1)
    {
        for(i=0;i<n;i++)
        {
            if(a[i] == key)
            {
                pos = i;
                break;
            }
        }
    }
    else if(choice == 2)
    {
        int low = 0, high = n-1, mid;

        while(low <= high)
        {
            mid = (low + high) / 2;

            if(a[mid] == key)
            {
                pos = mid;
                break;
            }
            else if(a[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    else
    {
        cout<<"Invalid choice";
        return 0;
    }

    if(pos == -1)
        cout<<"Element not found";
    else
        cout<<"Element found at position "<<pos;

    return 0;
}
