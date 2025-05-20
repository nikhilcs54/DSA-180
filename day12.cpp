#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){

    vector<int> v(5);

   cout<<"The Empty Vector"<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

  vector<int> v1(5,2);
 
 cout<<"Intialise a Vector with 2"<<endl;
    for(int i=0; i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
    cout<<endl;

    vector<int> arr1;

    arr1.push_back(5);
    arr1.push_back(8);
    arr1.push_back(4);
    arr1.push_back(7);
    arr1.push_back(3);

   cout<<"Inserting using push_back"<<endl;
    for(int i=0; i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
   
   cout<<endl;

    arr1.pop_back();

  cout<<"After poping back"<<endl;
    for(int i=0; i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }

   cout<<endl;
    arr1.clear();
  cout<<"After clearing the whole Array"<<endl;
    for(int i=0; i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }

    vector<int>arr3;
 
    arr3.push_back(5);
    arr3.push_back(8);
    arr3.push_back(4);
    arr3.push_back(7);
    arr3.push_back(3);

    cout<<endl;

   cout<<"Before erasing or removing element at index 2"<<endl;

    for(int i=0; i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

   cout<<endl;
    arr3.erase(arr3.begin()+2);
    cout<<"After erasing or removing element at index 2"<<endl;
    for(int i=0; i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

  cout<<endl;

cout<<"Front"<<endl;
  cout<<arr3.front()<<endl;
cout<<"Back"<<endl;
  cout<<arr3.back()<<endl;
cout<<"What is at index 2?"<<endl;
  cout<<arr3.at(2)<<endl;

cout<<"Sort in Asc order:"<<endl;
  sort(arr3.begin(),arr3.end());

for(int i=0; i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
  cout<<endl;
cout<<"Sort in Dsc order:"<<endl;
  sort(arr3.rbegin(),arr3.rend());

for(int i=0; i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }
  cout<<endl;

cout<<"Searching 4?"<<endl;
  cout<<binary_search(arr3.begin(),arr3.end(),4);

  cout<<endl;

cout<<"Searching 19?"<<endl;
  cout<<binary_search(arr3.begin(),arr3.end(),19);

  cout<<endl;

cout<<"Finding the index of 4?"<<endl;
  cout<<find(arr3.begin(),arr3.end(),4)-arr3.begin();

  int min=*min_element(arr3.begin(),arr3.end());

  int max=*max_element(arr3.begin(),arr3.end());

  int c=count(arr3.begin(),arr3.end(),4);

  cout<<endl;

cout<<"Min Max and Count?"<<endl;
  cout<<min<<" "<<max<<" "<<c<<endl;

}