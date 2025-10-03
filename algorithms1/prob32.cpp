#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, m;
    cout<<"Enter number and the power of it \n";
    cin>>num>>m;
    int result=pow(num,m);
    cout<<num<<"^"<<m<<"="<<round(result)<<endl;
    return 0;
}