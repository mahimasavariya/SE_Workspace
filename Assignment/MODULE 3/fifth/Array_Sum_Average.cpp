#include<iostream>
using namespace std;

int main()
{
    int n; 
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    double average;   // array declaration

    cout << "Enter elements: " << n << "integers : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}