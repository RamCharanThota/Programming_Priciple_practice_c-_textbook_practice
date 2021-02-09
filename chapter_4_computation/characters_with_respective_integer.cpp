/* 
program prints table of characters with their corresponding integer 
*/

#include<iostream>
#include<string>

int main(){
    int int_val_of_char=int('a');
    while(int_val_of_char<123){
        std::cout<<char(int_val_of_char)<<'\t'<< int_val_of_char<<std::endl;
        ++int_val_of_char;

    }
}