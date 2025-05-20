#include <iostream>
using namespace std;

class Human {
public:
    string name;
    
    void Display() {
        cout << "My name is " << name << endl;
    }
};

class Engineer : public virtual Human {
public:
    string stream;

    Engineer(){

    }

    Engineer(string name, string stream)  { 
        this->stream = stream;
    }

    void Work() {
        cout << "I belong to " << stream << endl;
    }
};

class Youtuber : public virtual Human {
public:
    int subscribers; 
   
   Youtuber(){

   }

    Youtuber(string name, int subscribers){ 
        this->subscribers = subscribers;
    }

    void contentCreator() {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber {
public:
    int salary;

    public:
    CodeTeacher(string name,string stream,int subscribers,int salary){
           
           this->name=name;
           this->stream=stream;
           this->subscribers=subscribers;
           this->salary=salary;

    }

    void Display() {
        cout << name << " " << stream << " " << subscribers << " " << salary << endl;
    }
};

int main() {
    CodeTeacher Nikhil("Nikhil", "CSE", 50000, 5000000);
    Nikhil.Display(); 
    return 0;
}
