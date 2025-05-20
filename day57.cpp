#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Customer{

    string bank_name;
    int acc_num;
    int balance;
    static int total_objects;
    static int total_balance;

    public:
    Customer(int acc_num,int balance,string bank_name){
        
        this->bank_name=bank_name;
        this->acc_num=acc_num;
        this->balance=balance;
        total_objects++;
        total_balance+=balance;
    }

    void Display(){
        cout<<bank_name<<" "<<acc_num<<" "<<balance<<" "<<endl;
    }

    void Deposit(int amount){
      total_balance+=amount;
    }

    void Withdraw(int amount){
      total_balance-=amount;
    }

    static void DisplayBal(){
        cout<<total_objects<<" "<<total_balance<<endl;
    }
};

int Customer::total_objects=0;
int Customer::total_balance=0;

int main(){
     
     Customer Nikhil(123543,25000,"HDFC");
     Nikhil.Display();
     Nikhil.Deposit(7000);
     Nikhil.Withdraw(2000);
     Customer Nidhi(123678,55000,"SBI");
     Nidhi.Display();
     Customer Saneha(123045,45000,"PNB");
     Saneha.Display();
     Customer::DisplayBal();

}

