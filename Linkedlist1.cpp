#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

//constructotr
    Node(int data){
        this-> data= data;
        this-> next= NULL;
    }
};

void insertathead(Node * &head, int d){
    //new node creat
    Node* temp= new Node(d);
    temp-> next= head;
    head=temp;
}

void insertattail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail-> next=temp;
    tail=temp;

}

void insertatposition(Node*&tail,Node*&head,int position, int d){
   if(position==1){
    insertathead(head,d);
    return;
   }
    Node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp-> next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //creating node for d
    Node * nodetoinsert= new Node(d);
    nodetoinsert->next= temp->next;
    temp-> next= nodetoinsert;

}

void print(Node* &head){
    Node*temp= head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
int main(){
    //creat a new node
   Node* node1= new Node(10);
   //cout<<node1 -> data<<endl;
   //cout<<node1-> next<<endl;

   //head pointer to node1
   Node* head= node1;
   Node* tail= node1;
   print(head);

   //insertathead(head, 12);
   insertattail(tail, 12);
   print(head);

   //insertathead(head, 15);
   insertattail(tail, 15);
   print(head);

   insertatposition(tail,head,4,22);
   print(head);

  // insertatposition(tail,head,4,25);
   //print(head);

}
