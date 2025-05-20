//Single Inheritance
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Human{
  
  protected:
  string name;
  int age;
  int weight;

};

class Student:public Human{

   int fees;

   public:
   Student(string name,int age,int weight,int fees){
       this->name=name;
       this->age=age;
       this->weight=weight;
       this->fees=fees;
   }

   void Display(){
    cout<<name<<" "<<age<<" "<<weight<<" "<<fees<<endl;
   }
};

int main(){

     Student Nikhil("Nikhil",26,56,5000);
     Nikhil.Display();

}