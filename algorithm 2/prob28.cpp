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
    int RandomNumber = rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr1[100], int &length){
    length= ReadPositiveNumber("Enter the length of the array");
    for(int i=0; i<length; i++){
        arr1[i]= RandomBetween(1,100);
    }
}

void PrintArray (int arr1[100], int length){
    
    for(int i=0; i<length; i++){
        cout<<arr1[i]<<" ";
    }
}

void CopyOfArray (int arrSource[100], int arrDestination[100], int length){
    for(int i=0; i<length;i++){
        arrDestination[i]=arrSource[i];
    }
}

int main(){
    srand((unsigned)time(NULL));
    int arr1[100], length;
    FillArrayWithRandomNumbers(arr,length);
    
    int arr2[100];
    CopyOfArray(arr1,arr2,length);

    cout<<"Array 1 elements: \n";
    PrintArray(arr,length);
    cout<<endl;
    
    cout<<"Array 2 elements after copy: "<<endl;
    PrintArray(arr2,length);

    return 0;
}