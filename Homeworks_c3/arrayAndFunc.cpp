#include<iostream>
using namespace std;
void readGrades (float grade[3])

{
    cout<<"Please enter grade1 \n";
    cin>>grade[0];
    cout<<"Please enter grade2 \n";
    cin>>grade[1];
    cout<<"Please enter grade3 \n";
    cin>>grade[2];
}
float averageGrades(float grade[3])
{
    float average;
    average=(grade[0]+grade[1]+grade[2])/3;
    return average;
}
int main(){
    float grade[3];
    readGrades(grade);
    cout<<"**************************** \n";
    cout<<"The average of grades is "<<averageGrades(grade)<<endl;
    return 0;
}