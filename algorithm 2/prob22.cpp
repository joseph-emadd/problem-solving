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
void ReadArrayElements (int arr[100], int &length){
    length=ReadPositiveNumber("Enter how many elements of array?");
    for(int i=0 ; i<length ; i++){
        cout<<"Element["<<i+1<<"]: ";
        cin>>arr[i];
    }
}

void PrintArrayElements (int arr[100], int length){
    cout<<"Original aarray: ";
    for(int i=0 ; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int NumberFrequencyInArray (int arr[100], int length , int NumberTocheck){
    int time=0;
    for(int i=0 ;i<length; i++){
        if(arr[i]==NumberTocheck)
        time++;
    }
    return time;
}

void PrintNumberFrequency (int arr[100], int length , int NumberToCheck){
    cout<<NumberToCheck<<" Is repeated "<<NumberFrequencyInArray(arr,length,NumberToCheck)<<" Time(s) ";
}

int main(){
    
    int arr[100];
    int length;
    ReadArrayElements(arr, length);
    int NumberTocheck=ReadPositiveNumber("Enter the number you want to check:");
    PrintArrayElements(arr,length);
    PrintNumberFrequency(arr,length,NumberTocheck);

    return 0;
}