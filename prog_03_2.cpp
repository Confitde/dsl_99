#include<iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n)
{
    int i, j, min, temp;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void insertionSort(int a[], int n)
{
    int i, j, key;
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[50], R[50];

    for(i=0;i<n1;i++)
        L[i] = a[l+i];
    for(j=0;j<n2;j++)
        R[j] = a[m+1+j];

    i = j = 0;
    k = l;

    while(i<n1 && j<n2)
    {
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while(i<n1)
        a[k++] = L[i++];

    while(j<n2)
        a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1, temp;

    for(int j=low;j<high;j++)
    {
        if(a[j] < pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi-1);
        quickSort(a, pi+1, high);
    }
}

int main()
{
    int a[50], n, i, choice;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter elements:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"\n1 Bubble Sort";
    cout<<"\n2 Selection Sort";
    cout<<"\n3 Insertion Sort";
    cout<<"\n4 Merge Sort";
    cout<<"\n5 Quick Sort";
    cout<<"\nEnter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            bubbleSort(a, n);
            break;
        case 2:
            selectionSort(a, n);
            break;
        case 3:
            insertionSort(a, n);
            break;
        case 4:
            mergeSort(a, 0, n-1);
            break;
        case 5:
            quickSort(a, 0, n-1);
            break;
        default:
            cout<<"Invalid choice";
            return 0;
    }

    cout<<"Sorted array:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
