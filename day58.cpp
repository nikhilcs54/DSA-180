#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Human{
string religion,caste;

public:
string name;
int age;
int weight;
};

class Student:private Human{
   private:
   int roll_number,fees;

   public:

   Student(string name,int age,int weight,int roll_number,int fees){
         this->name=name;
         this->age=age;
         this->weight=weight;
         this->roll_number=roll_number;
         this->fees=fees;
   }

   void Display(){
    cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
   }
};

class Teacher:private Human{
   private:
   int roll_number,salary;

   public:

   Teacher(string name,int age,int weight,int roll_number,int salary){
         this->name=name;
         this->age=age;
         this->weight=weight;
         this->roll_number=roll_number;
         this->salary=salary;
   }

   void Display(){
    cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<salary<<endl;
   }
};

int main(){

    Student Nikhil("Nikhil",22,55,54,1500);
    Teacher Deepankar("Deepankar",52,60,55,150000);
    Nikhil.Display();
    Deepankar.Display();
}