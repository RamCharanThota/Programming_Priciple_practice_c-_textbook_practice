/*
program is to test uncatch exception error
*/

#include<iostream>
#include<string>

void error(std::string s){
    throw  std::runtime_error(s);
};

int sumof(){
    int a,b;
    std::cout<<"enter two int values";
    std::cin>>a>>b;
    if (!std::cin){
        error("couldn't read a int value");
    }
    return a+b;
};



int main(){
try
{
int sum =sumof();
}
catch(std::exception & e){
    std::cerr<<"error"<<e.what()<<'\n';
    std::system("pause");
    return 1;


}
}