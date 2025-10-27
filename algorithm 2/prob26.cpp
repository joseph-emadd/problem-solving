#include<iostream>
#include<stdlib.h>
using namespace std;

int ReadPositiveNumber (string message){
    int number;
    do
    {
    cout<<message<<endl;
    cin>>number;
    }while(number<=0);
    return number;
}

int RandomBetween (int low, int high){
    int RandomNumber= rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100], int &length){
    length=ReadPositiveNumber("Enter the length of the array");
    for(int i=0 ; i<length; i++){
        arr[i]=RandomBetween(1,100);
    }
}

void PrintArray (int arr[100], int length){
    cout<<"The elements of array: ";
    for(int i=0; i<length; i++){
        cout<<arr[i]<<" ";
    }
}

int SumOfArray (int arr[100], int length){
    int sum=0;
    for(int i=0; i<length; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100], length;
    FillArrayWithRandomNumbers(arr,length);
    PrintArray(arr,length);
    cout<<endl<<"The sum of array: "<<SumOfArray(arr,length);
    return 0;
}