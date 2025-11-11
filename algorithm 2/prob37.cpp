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
    int RandomNumber= rand()% (high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100] , int length){
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

void AddArrayElement (int number , int arr[100] , int &length){
    length++;
    arr[length-1] = number;
}

void CopyArrayUsingAddArrayElement (int arrSource[100] , int arrDestination[100], int arrSourceLength, int &arrDestinationLength){
    for(int i=0 ; i<arrSourceLength ; i++){
        AddArrayElement(arrSource[i] , arrDestination , arrDestinationLength);
    }
}

int main(){

    srand((unsigned)time(NULL));
    int arr[100] , length=0;
    length = ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,length);
    int arr2[100] , length2=0;
    CopyArrayUsingAddArrayElement(arr,arr2,length,length2);
    
    cout<<"Array 1 Elements: \n";
    PrintArray(arr,length);

    cout<<"Array 2 Elements After Copy: \n";
    PrintArray(arr2,length2);

    return 0; 
}