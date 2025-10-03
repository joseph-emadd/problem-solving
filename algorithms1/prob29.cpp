#include <iostream>
using namespace std;
// sum even 1 to n
int main(){
    int n , sum=0;
    cout<<"Enter the number n \n";
    cin>>n;
    for(int i=n ; i>=1 ; i--)
    {
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}