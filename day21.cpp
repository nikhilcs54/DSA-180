#include<iostream>
using namespace std;

int main(){
    int n=8;
    float b=8.2;
    char ch='a';
    int arr[]={6,5,4,2};
    cout<<"INT"<<" "<<n<<"Float"<<" "<<b<<" "<<"Float"<<ch<<" "<<endl;

  cout<<"Array Elements"<<endl;
    for(int i=0;i<4;i++){
      cout<<arr[i]<<" ";
    }
   cout<<endl;

  cout<<"String Elements"<<endl;
   char brr[]={'N','I','K','H','I','L'};

   cout<<brr<<endl;

   string s;

   cout<<"String Input and Output"<<endl;
   getline(cin,s);


   cout<<s<<endl;

   string s1="Nikhil",s2="Singh";

   cout<<"Adding s1 and s2 strings"<<endl;
   cout<<s1+s2<<" "<<endl;

  cout<<"s1 string size: "<<endl;
   cout<<s1.size()<<" "<<endl;

cout<<"add l in s1 string: "<<endl;
 s1.push_back('l');

cout<<"after adding l in s1 : "<<endl;
 cout<<s1<<" "<<endl;

cout<<"removing l from s1 string : "<<endl;
 s1.pop_back();
 
 cout<<s1<<" "<<endl;

 string str="She is from \"Patna\"";

cout<<"str with escape: "<<endl;
 cout<<str<<endl;

 int start=0,end=s1.size()-1;

 while(start<end){
    swap(s1[start],s1[end]);
    start++;
    end--;
 }
cout<<"Reverse"<<" "<<s1<<endl;

int count=0;

while(s1[count]!='\0'){
    count++;
}

cout<<"Size of s1 without size()"<<" "<<count<<endl;
}