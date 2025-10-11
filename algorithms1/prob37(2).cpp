#include <iostream>  
using namespace std;
float ReadNumber (string message){
    float num;
    cout<<message<<endl;
    cin>>num;
    return num;
}
float SumUntil (){
    float sum ,num=0;
    int i=1;
    do{
        num=ReadNumber("Enter number "+to_string(i));
        if(num==-99){
            break;
        }
        sum+=num;
        i++;
    }while(num!=-99);
    return sum;
}
int main(){
    float sum=SumUntil();
    cout<<"Result = "<<sum;
    
    return 0;  
}