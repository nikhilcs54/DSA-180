#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Animal{

    private:
    string name;
    int age;
    int weight;

    public:

    void set(string name,int age,int weight){
        this->name=name;
        this->age=age;
        this->weight=weight;
    }
  
  void get(){
    cout<<name<<" "<<age<<" "<<weight<<endl;
  }

};

int main(){
    Animal Dog;

    Dog.set("Marry",1,20);

    Dog.get();
}