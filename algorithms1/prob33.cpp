//problem 33
#include<iostream>
using namespace std;
string grades (float grade)
{
    if(grade>=90){
        return "A";
    }
    else if(grade>=80){
        return "B";
    }
    else if(grade>=70){
        return "c";
    }
    else if(grade>=60){
        return "D";
    }
    else if(grade>=50){
        return "E";
    }
    else{
        return "Fail";
    }
}
int main(){
    float mark;
    cout<<"Please enter your mark \n";
    cin>>mark;
    cout<<"your grade is "<<grades(mark);
    return 0;
}