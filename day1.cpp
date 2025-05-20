#include <iostream>
using namespace std;

//Function Declaration
int Prime(int num){

//Function Definition
if(num<2)
return 0;

for(int i=2;i<num;i++){
    if(num%i==0)
    return 0;
}

return 1;
}

int Factorial(int num=0){

    int fact=1;

    if(num==0)
    return 1;
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
    }

    return fact;
}

int Sum(int num1,int num2){
    return num1+num2;
}

int Mul(int num1,int num2){
    return num1*num2;
}

void Increment(int &num){
    num++;
}

void Swap(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void Swap(float &num1,float &num2){
    float temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

int main() {
    
    int a,b;
    float x=1.2,y=2.2;
    cin>>a>>b;

   //Function Call
    cout<<Prime(a)<<" "<<Factorial(a)<<" "<<Prime(b)<<" "<<Factorial(b)<<" "<<Prime(b-a)<<" "<<Factorial(b-a)<<" "<<Sum(a,b)<<" "<<Mul(a,b)<<" "<<Factorial()<<endl;
    Increment(a);
    cout<<a<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    Swap(x,y);
    cout<<x<<" "<<y<<endl;

}
