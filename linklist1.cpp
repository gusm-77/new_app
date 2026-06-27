#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data=val;
            next=NULL;
        }
};
class List{
    Node *head;
    Node *tail;

    public:
        List(){
            head=tail=NULL;
        }
    void push_fornt(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            (*newNode).next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node *newNode=new Node(val);

        if (head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printll(){
        Node *temp=head;

        while (temp != NULL){
            cout<<temp ->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
        cout<<endl;
    }
};
int main(){
    List ll;

    ll.push_fornt(1);
    ll.push_fornt(2);
    ll.push_fornt(3);
    ll.push_fornt(4);
    ll.push_fornt(5);

    ll.push_back(0);

    ll.printll();
}
