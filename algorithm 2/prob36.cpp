#include<iostream>
using namespace std;

int ReadNumber (){
    int number;
    cout<<"Please enter a number?\n ";
    cin>>number;
    return number;
}

void AddArrayElement (int number , int arr[100] , int &length){
    length++;
    arr[length-1] = number;
}

void InputUserNumbersInArray (int arr[100] , int &length){
    bool AddMore;
    do{
        AddArrayElement(ReadNumber() , arr, length);
        cout<<"Do You Want to add more numbers? [0]: No , [1]: yes?\n";
         cin>>AddMore;
    }while(AddMore);
}

void PrintArray (int arr[100] , int length){
    for(int i=0 ; i<length;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100] , length=0;
    InputUserNumbersInArray(arr,length);

    cout<<"Array Length: "<<length<<endl;
    cout<<"Array Elements: ";
    PrintArray(arr,length);
    

    return 0; 
}