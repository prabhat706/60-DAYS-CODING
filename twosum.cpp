#include <bits/stdc++.h>
using namespace std;

int TwoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                i++, j++;
                cout << i << " + " << j << " = " << target << endl;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter the value of size" << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Entet the value of target" << endl;
    cin >> target;

    cout << TwoSum(arr, size, target) << endl;
}