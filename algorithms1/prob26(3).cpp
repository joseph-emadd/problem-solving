#include <iostream>  
#include<cmath>
using namespace std;
int ReadNumber (){
    int num;
    cout<<"Enter the number to print 1 to the number \n";
    cin>>num;
    return num;
}
void PrintRangeFrom1ToN (int num){
    int i=1;
    while(i<=num){
        cout<<i<<endl;
        i++;
    }
}
int main(){
    PrintRangeFrom1ToN(ReadNumber());
    return 0;  
}