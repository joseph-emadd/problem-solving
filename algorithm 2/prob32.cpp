#include<iostream>
#include<stdlib.h>
using namespace std;

int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

int RandomBetween (int low, int high){
    int RandomNumber = rand()% (high-low+1)+ low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100], int length){
    for(int i=0 ; i<length ; i++){
        arr[i] = RandomBetween(1,100);
    }
}

void PrintArray (int arr[100] , int length){
    for(int i=0 ; i<length ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void CopyInReversedOrder (int arrSource[100], int arrDestination[100] , int length){
    for(int i=0 ; i<length;i++){
        arrDestination[i] = arrSource[length-(i+1)];
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100] , length ,arr2[100];
    length= ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,length);
    cout<<"\nArray 1 Elements:\n";
    PrintArray(arr,length);

    CopyInReversedOrder(arr, arr2,length);
    cout<<"\nArray 2 Elements After copying in reversed order:\n";
    PrintArray(arr2,length);
    return 0; 
}