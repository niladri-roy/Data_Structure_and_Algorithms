#include<iostream>
using namespace std;



int main(){

    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array "<< endl;
    for(int i=0; i<n; i++){

        cin >> arr[i];
    }
    
    findDuplicates(arr,n);
}