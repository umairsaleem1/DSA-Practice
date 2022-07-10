// Insertion sort


#include<iostream>
using namespace std;


void sort(int arr[], int size){
    int temp;
    for(int i=1; i<size; i++){
        temp = arr[i];
        for(int j=(i-1); j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
                if(j==0){
                    arr[0] = temp;
                }
            }else{
                arr[j+1] = temp;
                break;
            }
        }
    }
}


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {10,3,9,2};

    sort(arr, 4);
    printArray(arr, 4);
    return 0;
}