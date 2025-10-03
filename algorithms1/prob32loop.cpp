#include <iostream>
using namespace std;
//prob 32
int main(){
    int num, power ,p=1;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Enter the power of the number \n";
    cin>>power;
    for(int i=0 ; i<power ; i++){
        p=p*num;
    }
    cout<<p;
    return 0;
}