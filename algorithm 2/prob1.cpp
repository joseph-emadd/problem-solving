#include <iostream>  
using namespace std;
void PrintHeaderTable (){
    cout<<"\t\t\t Multipliction Table From 1 To 10 \n\n";
    for(int i=1; i<=10; i++){
        cout<<"\t"<<i;
    }
    cout<<endl;
    for(int i=1 ; i<=28 ; i++){
        cout<<"___";
    }
    cout<<"\n";
}
string ColumnSeparartor (int i){
    if(i<10)
    return "   |";
    else
    return "  |";
}
void PrintMultiplicationTbale(){
    PrintHeaderTable();
    for(int i=1 ; i<=10 ; i++){
        cout<<i<<ColumnSeparartor(i)<<"   ";
        for(int j=1 ; j<=10 ; j++){
            cout<<i*j<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    PrintMultiplicationTbale();
    return 0;  
}