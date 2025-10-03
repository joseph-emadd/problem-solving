#include <iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=10; i++){
        cout<<i;
        for(int j=i+1; j<=10 ; j++){
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}