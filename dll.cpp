#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node (int val){
            data=val;
            prev=nullptr;
            next=nullptr;
        }
   
};

class DoublyLinkList{
    private:
        Node *head;
    public:
        DoublyLinkList(){
            head=nullptr;
        }
    void insertFront(int val){
        Node *newNode=new Node(val);
        if (head != nullptr){
            head->prev=newNode;
            newNode->next=head;
        }
        head=newNode;
    }
    void insertEnd(int val){
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node *temp=head;
        while(temp->next !=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
    int search(int key){
        Node *temp=head;
        int idx=0;
        while (temp!=nullptr)
        {
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
        
    }
    void insert(int val,int pos){
        if(pos<0){
            cout<<" Invalid possition\n";
            return;
        }
        if(pos==0){
            insertFront(val);
            return;
        }
        Node *temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==nullptr){
                cout<<"Invalid possition\n";
                return;
            }
            temp=temp->next;
        }
        if(temp==nullptr){
            cout<<"Invalid position\n";
            return ;
        }
        Node *newNode=new Node(val);
        newNode->next=temp->next;
        newNode->prev=temp;

        if(temp->next !=nullptr){
            temp->next->prev=newNode;
        }
        temp->next=newNode;
    }
    void display(){
        Node *temp=head;

        while (temp !=nullptr){
            cout<<temp->data<<" <-> ";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
        cout<<endl;
    }  
};
int main(){
    DoublyLinkList dll;
    dll.insertFront(1);
    dll.insertFront(2);
    dll.insertFront(3);
    dll.insertFront(4);
    
    dll.insert(5,3);
    dll.display();
    cout<<"Search position : "<<dll.search(3)<<endl;
    return 0;

}