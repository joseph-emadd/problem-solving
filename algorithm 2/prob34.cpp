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

void PrintArray (int arr[100], int length){
    for(int i=0 ; i<length ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int FindNumberPositionInArray (int arr[100], int length , int NumberToSearch){
    for(int i=0 ; i<length;i++){
        if(arr[i]==NumberToSearch){
            return i;
        }
    }
    return -1;
}

int main(){
    srand((unsigned)time(NULL));

    int arr[100]  , length;
    length = ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,length);
    PrintArray(arr,length);

    int NumberToSearch;
    NumberToSearch=ReadPositiveNumber("Please Enter a number to search for? ");

    cout<<"Number you are looking for is: "<<NumberToSearch<<endl;
    
    if(FindNumberPositionInArray(arr,length,NumberToSearch)==-1){
        
        cout<<"The number not found:-(\n";
    }
    else{
       cout<<"The Number Found at position: "<<NumberPosition(arr,length,NumberToSearch)<<endl; 
       cout<<"The Number Found its order: "<<NumberPosition(arr,length,NumberToSearch)+1<<endl; 

    }

    return 0; 
}