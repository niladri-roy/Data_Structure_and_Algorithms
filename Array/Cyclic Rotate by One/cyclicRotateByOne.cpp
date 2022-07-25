/*
Approach 1:
We can use two pointers,
say i and j which point to first and last element of array respectively.
As we know in cyclic rotation we will bring last element to first and 
shift rest in forward direction,
so start swaping arr[i] and arr[j] and
keep j fixed and i moving towards j.
Repeat till i is not equal to j

Approach 1 , Explanation:
*/

#include<iostream>
using namespace std;

void cyclicRotateByOneApproach1(int arr[] , int n){

    int i=0;
    int j=(n-1);

    while(i != j){

        swap(arr[i] , arr[j]);
        i++;
    }
} 
int main()
{

    int n;
    cout << "Enter the size of the array " << endl;
    cin >>  n;

    int arr[n];
    cout << "Enter the element of the array " << endl;
    for(int i=0 ; i<n ; i++){

        cin >> arr[i];
    }
    cyclicRotateByOneApproach1(arr , n);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}