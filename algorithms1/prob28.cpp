#include <iostream>
using namespace std;
// sum odd 1 to n
int main(){
    int n;
    cout<<"Enter the number n \n ";
    cin>>n;
    int sum=0;
    for(int i=n ; i>=1 ; i-- )
    {
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}