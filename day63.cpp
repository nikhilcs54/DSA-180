#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *Next;

    Node(int value){
        data=value;
        Next=nullptr;
    }
};

int main(){
    // Node N1(4);

    // cout<<N1.data<<" "<<N1.Next<<endl;

    //  Node *Head=new Node(4);
    // cout<<Head->data<<"->"<<Head->Next<<endl;

   //insert at begining
    int arr[5]={8,7,6,5,4};

    Node *Head=nullptr;

    // for(int i=0;i<5;i++){

    //     if(Head==nullptr){
    //         Head=new Node(arr[i]);
    //     }
    //     else{
    //         Node *temp=new Node(arr[i]);
    //         temp->Next=Head;
    //         Head=temp;
    //     }
    // }

     //insert at end
     Node *tail=nullptr;
    // while(tail!=nullptr){
    //     tail=tail->Next;
    // }
    // Node *temp=new Node(28);
    // tail->Next=temp;

    for(int i=0;i<5;i++){
        if(Head==nullptr){
            Head=new Node(arr[i]);
            tail=Head;
        }
        else{
            tail->Next=new Node(arr[i]);
            tail=tail->Next;
        }
    }

    Node *temp1=Head;

    while(temp1!=nullptr){
        cout<<temp1->data<<"->";
        temp1=temp1->Next;
    }
}