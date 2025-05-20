//Multiple Inheritance
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Actor{
  
  protected:
  int films;

  public:
   void Films(){
    cout<<"I have done "<<films<<" films"<<endl;
   }
  

};

class Vlogger{
   protected:
   int countries;

   public:

   void Countries(){
    cout<<"I have been to "<<countries<<" countries"<<endl;
   }
};

class Youtuber{

   public:
   int subscribers;

   public:

   void Subscribers(){
    cout<<"I have been total "<<subscribers<<" subscribers"<<endl;
   }
};

class Engineer:public Actor,public Vlogger,public Youtuber{
    public:
    string name;
    
    public:
    Engineer(string name,int films,int countries,int subscribers){
        this->name=name;
        this->films=films;
        this->countries=countries;
        this->subscribers=subscribers;
    }
    
    public:
    void Display(){
        cout<<name<<" "<<films<<" "<<countries<<" "<<subscribers<<endl;
    }
};

int main(){

     Engineer Nikhil("Nikhil",26,50,50000);
     Nikhil.Display();
     Nikhil.Countries();
     Nikhil.Films();
     Nikhil.Subscribers();
     

}