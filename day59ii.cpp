//Multilevel Inheritance
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person{
  
  protected:
  string name;
  int age;
  

};

class Employees:public Person{
   protected:
   int salary;

   public:

   Employees(){

   }
   Employees(string name,int age,int salary){
       this->name=name;
       this->age=age;
       this->salary=salary;
   }

   void Display(){
    cout<<name<<" "<<age<<" "<<salary<<endl;
   }
};

class Manager:public Employees{

   string department;
   int no_of_emp;

   public:
   Manager(string name,int age,int salary,string department,int no_of_emp){
       this->name=name;
       this->age=age;
       this->salary=salary;
       this->department=department;
       this->no_of_emp=no_of_emp;
   }

   void Display(){
    cout<<name<<" "<<age<<" "<<salary<<" "<<department<<" "<<no_of_emp<<endl;
   }
};

int main(){

     Employees Nikhil("Nikhil",26,50000);
     Nikhil.Display();
     Manager Alok("Alok Gupta",26,80000,"Finance",26);
     Alok.Display();

}