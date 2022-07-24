#include<iostream>
using namespace std;

void cyclicRotateByOne(int arr[] , int n){

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
    cyclicRotateByOne(arr , n);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}