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

void FillArrayWithRandomNumber (int arr[100] , int &length){
    length=ReadPositiveNumber("Enter the length of the array ");
    for(int i=0 ; i<length; i++){
        arr[i]=RandomBetween(1,100);
    }
}

void PrintArray (int arr[100], int length){
    cout<<endl<<"Array Elements: ";
    for(int i=0 ; i<length ; i++){
        cout<<arr[i]<<" ";
    }
}

int GetMinNumber (int arr[100], int length){
    int Min=arr[0];
    for(int i=1 ;i<length; i++){
        if(arr[i]<Min)
            Min=arr[i];
    }
    return Min;
}
int main(){
    srand((unsigned)time(NULL));
    int arr[100], length;
    FillArrayWithRandomNumber(arr,length);
    PrintArray(arr,length);
    cout<<"\nMin Number is: "<<GetMinNumber(arr,length);

    return 0;
}