//hybrid inheritance

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Male{
    public:
    string gender;
    
    public:
    void Gender(){
        cout<<"I am male"<<endl;
    }
};

class Female{
    public:
    string gender;
    
    public:
    void Gender(){
        cout<<"I am female"<<endl;
    }
};

class Student{
    public:
    int fees;

    public:
    void Fees(){
        cout<<"I have paid "<<fees<<endl;
    }
};

class Boy:public Male,public Student{

   public:
   string name1;
   
   public:
   Boy(string name1,string gender,int fees){
      this->name1=name1;
      this->gender=gender;
      this->fees=fees;
   }
   void Display(){
    cout<<name1<<" "<<gender<<" "<<fees<<endl;
   }
};

class Girl:public Female,public Student{

   public:
   string name2;
   
   public:
   Girl(string name2,string gender,int fees){
      this->name2=name2;
      this->gender=gender;
      this->fees=fees;
   }

   void Display(){
    cout<<name2<<" "<<gender<<" "<<fees<<endl;
   }
};

int main(){

    Boy Nikhil("Nikhil","Male",50000);
    Nikhil.Display();
    Girl Richa("Richa","Female",80000);
    Richa.Display();
}