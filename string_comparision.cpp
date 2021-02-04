/**
 * program to understand comparision of two strings
 */
#include<iostream>
#include<string>

using namespace std;

int main(){
    string first = "apple";
    string second="bat";

    cout<<"first comes later alphabetically";

    if(first>second){
        cout<<"first comes later alphabetically";
    }

    if (first <second){

        cout<<"second comes later alphabetically";

    }
}