#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int n;
    cout << "enter n :- ";
    cin >> n;
    cout << endl;

    int arr[n];

    cout << "enter array elements :-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "original array is ";
    printArray(arr, n);

    cout << endl;
    cout << "reversed array is ";
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}