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

void FillArray (int arr[100] , int arrlength){
    for(int i=0 ; i<arrlength;i++){
        cout<<"Array["<<i+1<<"]: ";
        cin>>arr[i];
    }
}

void PrintArray (int arr[100] , int arrlength){
    for(int i=0 ; i<arrlength ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ReverseArray (int arr[100] , int arrReverse[100] , int arrLength){
    for(int i=0 ; i<arrLength;i++){
        arrReverse[i] = arr[arrLength-1-i];
    }
}

bool IsPalindromeArray (int arr[100] , int arrReverse[100] , int arrLength){
    int i=0;
    while(i<arrLength){
        if(arr[i]!=arrReverse[i]){
            return false;
            i++;
        }
        i++;
    }
    return true;
}


int main(){
    int arr[100] , arrLength=0, arrReverse[100];
    arrLength = ReadPositiveNumber("Enter the number of Elements: ");
    FillArray(arr,arrLength);
    cout<<"\nArray Elements: \n";
    PrintArray(arr,arrLength);
    ReverseArray(arr,arrReverse,arrLength);

    if(ISPalindromeArray(arr,arrReverse,arrLength))
    cout<<"\nYour array is palindrome\n";
    else
    cout<<"\nYour array is not palindrome\n";
    
    return 0;
}