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
    int RandomNumber = rand()%(high-low+1);
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100] , int length){
    for(int i=0 ; i<length ; i++){
        arr[i] = RandomBetween(1,100);
    }
}

void PrintArray (int arr[100] , int length){
    for(int i=0 ; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

short FindNumberPositionInArray (int NumberToSearch , int arr[100] , int length){
    for(int i=0 ; i<length; i++){
        if(NumberToSearch==arr[i])
        return i;
    }
    return -1;
}

bool IsNumberInArray (int NumberToSearch , int arr[100] , int length){
    return FindNumberPositionInArray(NumberToSearch,arr,length)!=-1;
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100] , length , NumberToSearch;
    length = ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,length);
    cout<<"\nArray 1 Elements: \n";
    PrintArray(arr,length);

    NumberToSearch= ReadPositiveNumber("Please enter a number to search for: ");
    cout<<"\nNumber you are looking for is: "<<NumberToSearch;

    if(IsNumberInArray(NumberToSearch,arr,length))
        cout<<"\nYes The number is Found :-)";
    else
    cout<<"\nNo The number is not Found :-(";

    return 0; 
}