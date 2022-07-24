/*
Approach:
Set start and end as 0 and N – 1, where the start and end variables denote the lower and upper bound of the search space respectively.
Calculate mid = (start + end) / 2.
If arr[mid] is found to be equal to K, print mid as the required answer.
If arr[mid] exceeds K, set end = mid – 1 Otherwise, set  start = mid + 1.
If the element is not present inside the array then return the possible inserting position so that the result array will remain sorted, which will be equal to end + 1.
*/

/*
Explanation :

*/
#include<iostream>
using namespace std;

// Create the function to find the index.
int searchInsertPosition(int arr[], int n, int k){

    //Initialize the start and end index.
    int start = 0;
    int end = n-1;

    // Initiate the loop to traverse the array and set the limit of the loop.
    while(start <= end ){

        // Initiate the mid of the portion of the array in which you are founding.
        int mid = start + ((end - start)/2);

        // If the value of the mid index element is equal to k, return mid.
        if(arr[mid] == k){
            return mid;
        }

        // If the value of the mid index element is greater than k, then end = mid - 1

        else if(arr[mid] > k){
            end = mid - 1;
        }

        // If the value of the mid index element is smaller than k, then start = mid + 1
        else{
            start = mid + 1;
        }
    }

    // If the element is not present inside the array then return the possible inserting position so that the result array will remain sorted, which will be equal to end + 1.
    return end + 1;
}

// Create main() function.
int main(){

    // Input the size of array.
    int n;
    cout << "Enter the size of the array "<< endl;
    cin >> n;

    // Input the array.
    int arr[n];
    cout << "Enter the elements inside the array "<< endl;
    for(int i=0 ; i<n ; i++){

        cin >> arr[i];
    }

    // Input the element k which you want to find its index.
    int k;
    cout << "Enter the element which you want to find " << endl;
    cin >> k;

    // Call a function which will return the index.
    int index = searchInsertPosition(arr, n, k);

    // Output the returned index value.
    cout<< "The element must be in " << index << " index" << endl;
}