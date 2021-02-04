/*
 program is meant to count repeated words in sentence given in txt file
*/

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream myReadfile;
    myReadfile.open("detect_word_file.txt");

    char output[200];
    if(myReadfile.is_open()){
        while (!myReadfile.eof()){
            myReadfile>>output;
            cout<<output;


        }

    }
}