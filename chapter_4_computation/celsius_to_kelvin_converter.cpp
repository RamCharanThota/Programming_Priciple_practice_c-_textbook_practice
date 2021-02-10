/*
program is meant to convert temp from celsius to kelvin
*/
#include <iostream>
#include<string>

using namespace std;

double ctok(double c){
    int k = c+273.15;
    return k;
}

int main(){
    double c=0;
    cout<<"enter the temp value in celsius";
    cin>>c;
    double k=ctok(c);
    cout<<k<<"kelvin"<<'\n';
}