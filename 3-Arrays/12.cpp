// Find the range of the array. Range means the difference between the
// maximum and minimum element in the array.
// Sample Input: 6
//               -1 -3 3 47 21 91
// Sample Output: Range: 94
// here , 6 is the size of array followed by the input of elements
// Here , Range = 91-(-3) = 94



#include<iostream>
using namespace std;


void sort(int arr[], int size){
    int temp;
    for(int i=0; i<(size-1); i++){
        int indexOfMin = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = arr[i];
    }
}

int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter element of the array: ";
        cin>>arr[i];
    }

    sort(arr, size);
    cout<<"Range: "<<arr[size-1]-arr[0]<<endl;
    return 0;
}