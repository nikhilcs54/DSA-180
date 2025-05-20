#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Grandfather{
public:
string complex;

public:
void About1(){
    cout<<"I am Grandfather"<<endl;
}
};

class Father:public Grandfather{
    
    public:
    string name1;

    public:
    void About2(){
    cout<<"I am Father"<<endl;
   }

   Father(string name1,string complex){
    this->name1=name1;
    this->complex=complex;
   }

};

class Son:public Grandfather{
    
    public:
    string name2;

    public:
    void About3(){
    cout<<"I am Son"<<endl;
   }

   Son(string name2,string complex){
    this->name2=name2;
    this->complex=complex;
   }

};

class Daughter:public Grandfather{
    
    public:
    string name3;

    public:
    void About4(){
    cout<<"I am Daughter"<<endl;
   }

   Daughter(string name3,string complex){
    this->name3=name3;
    this->complex=complex;
   }

};

int main(){
    Grandfather Sidheshwar;
    Sidheshwar.About1();
    
    Father Sanjeev("Sanjeev","Brown");

    Sanjeev.About2();

    Son Nikhil("Nikhil","Brown");

    Nikhil.About3();

    Daughter Sneha("Sneha","Fair");

    Sneha.About4();
}