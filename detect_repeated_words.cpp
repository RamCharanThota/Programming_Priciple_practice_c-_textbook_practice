/*
program detect repeated words
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    string previous_word="";
    string curent_word;
    while(cin>>curent_word){ // getting user input

        if(previous_word==curent_word){
            cout<<"repeated word "<<curent_word<< endl;

        }

       previous_word =curent_word;

    }
}
