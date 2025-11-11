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

void Swap (int &A , int &B){
    int temp;
    temp=A;
    A=B;
    B=temp;
}

int RandomBetween (int low, int high){
    int RandomNumber= rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayFrom1ToN (int arr[100], int &length){
    length=ReadPositiveNumber("Enter Number of Elements: ");
    for(int i=0 ; i<length ; i++){
        arr[i] = i+1;
    }
}

void ShuffleArray (int arr[100] , int length){
    for(int i=0 ; i<length ; i++){

     swap(arr[RandomBetween(1,length)-1], arr[RandomBetween(1,length)-1]);
    
    }
}

void PrintArray (int arr[100] , int length){
    for(int i=0 ; i<length ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    srand((unsigned)time(NULL));
    int arr[100] , length;

    FillArrayFrom1ToN(arr,length);
    cout<<"\nArray Elements before Shuflle:\n";
    PrintArray(arr,length);

    ShuffleArray(arr,length);
    cout<<"\nArray Elements after Shuflle:\n";
    PrintArray(arr,length);
   
   
    return 0;
}