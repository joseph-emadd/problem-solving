#include <iostream>  
#include<cmath>
using namespace std;
int ReadNumber (){
    int num;
    cout<<"Enter the number to print the number to 1 \n";
    cin>>num;
    return num;
}
void PrintRangeNTo1 (int n){
    for(int i=n ; i>=1 ; i--){
        cout<<i<<endl;
    }
}
int main(){
    PrintRangeNTo1(ReadNumber());
    return 0;  
}