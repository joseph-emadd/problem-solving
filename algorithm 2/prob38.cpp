#include<iostream>
#include<stdlib.h>
using namespace std;
enum enEvenOrOdd {even=1, odd=2};
int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

enEvenOrOdd CheckEvenOrOdd (int number){
    if(number%2==0)
    return enEvenOrOdd::even;
    else
    return enEvenOrOdd::odd;
}

int RandomBetween (int low, int high){
    int RandomNumber= rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100] , int length){
    for(int i=0 ; i<length; i++){
        arr[i] = RandomBetween(1,100);
    }
}

void PrintArray (int arr[100] , int length){
    for(int i=0 ; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void AddArrayElement (int number , int arr[100] , int &length){
    length++;
    arr[length-1] = number;
}

void CopyOddNumbersToArray (int arrSource[100] , int arrDestination[100] , int arrlength, int &arrlength2){
    for(int i=0 ; i<arrlength ; i++){
        if(CheckEvenOrOdd(arrSource[i])==enEvenOrOdd::odd){
            AddArrayElement(arrSource[i], arrDestination , arrlength2);
        }
    }
}
int main(){
    srand((unsigned)time (NULL));
    int arr[100] , arrlength=0;
    arrlength = ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,arrlength);
    int arr2[100] , arrlength2=0;
    CopyOddNumbersToArray(arr, arr2, arrlength, arrlength2);

    cout<<"Array 1 Elements: \n";
    PrintArray(arr,arrlength);
    cout<<"Array 2 Odd Numbers: \n";
    PrintArray(arr2, arrlength2);
    

    return 0; 
}