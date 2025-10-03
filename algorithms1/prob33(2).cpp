#include <iostream>  
#include<cmath>
using namespace std;
float ReadNumberInRange (int from , int to){
    float num;
    do {
    cout<<"Enter the grade between "<<from<<" and "<<to<<endl;
    cin>>num;
    }while(!(num>=from && num<=to));
    return num;
}
float ReadGrade (){
    float grade;
    cout<<"Enter your grade \n";
    cin>>grade;
    return grade;
}
char CheckGpa (float grade){
    if(grade>=90)
    return 'A';
    else if(grade>=80)
    return 'B';
    else if(grade>=70)
    return 'C';
    else if(grade>=60)
    return 'D';
    else if(grade>=50)
    return 'E';
    else
    return 'F';
}
int main(){
    cout<<CheckGpa(ReadNumberInRange(0,100));

    return 0;  
}