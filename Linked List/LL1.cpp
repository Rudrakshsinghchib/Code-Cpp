#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node() {
        this->next=NULL;
    }
    node(int data) {
        //cout<<"Parameterized constructor called"<<endl;
        this->data=data;
        this->next=NULL;
    }
    ~node()
    {
        cout<<"destructor was called for "<<this->data<<endl;;
    }

};


void insert(node*head)
{
    node*temp=new node(51);
    temp->next=head;
    head=temp;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }

}
void insertAthead(node*&head,node*&tail,int data)
{
    if(head==NULL)
    {
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else
    {
        node*newnode=new node(data);
        newnode->next=head;
        head=newnode;

    }

}
void insertAttail(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else
    {
        node*newnode=new node(data);
        tail->next=newnode;
        tail=newnode;

    }
}

void createtail(node *&tail,node *&head,int data)
{
    node * temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    tail=temp;

}
// void insertAtposition(node *&head,node *&tail,int data,int position)
// {
//     int l = getlength(head);
//     if(position==1)
//     {
//         insertAthead(head,tail,data);
//     }
//     else if(position==l+1)
//     {
//         insertAttail(head,tail,data);
//     }
//     else
//     {
//         node*newnode=new node(data);
//         node*prev=NULL;
//         node* curr=head;
//         while(position!=1)
//         {
//              position--;
//             prev=curr;
//             curr=head->next;
           
//         }

//       //  node*temp=new node(data);
//          prev->next=newnode;
//          newnode->next=curr;
       
       
        

//     }
// }
void print(node*&head)
{
    
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }

}
int getlength(node*&head)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

void insertAtposition(node*&head,node*&tail,int data,int position)
{
    int len=getlength(head);
    
    if(position==1)
    {
        insertAthead(head,tail,data);
    }
    else if(position==len+1)
    {
        insertAttail(head,tail,data);
    }
    else
    {
        node*newNode=new node(data);
        node*prev=NULL;
        node*curr=head;
        while(position!=1)
        {
            position--;
            prev=curr;
            curr=curr->next;
        }

        prev->next=newNode;
        newNode->next=curr;
    }
}
//LL-2
void Delete(node*&head,node*&tail,int position)
{
    int len=getlength(head);
    if(head==NULL)
    {
        cout<<"Cant do this"<<endl;
    }
    if(position==1)
    { 
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position==len)
    {
        node*prev=head;
        while(prev->next!=tail)
        {
            prev=prev->next;
            position--;
        }
        delete tail;
        tail=prev;
        prev->next=NULL;
    }
    else
    {
        node*prev=NULL;
        node*curr=head;
        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}


int main() {
    // node *first=new node(10);
    // node *second=new node(20);
    // node *third=new node(30);
    // node *fourth=new node(40);
    // node *fifth=new node(50);
    

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;
    // int data=67;
    // node*head=first;
    // node*tail=fifth;
    // //print(head);
    // insertatail(head,tail,data);
    // print(head);
    

    // // node*head=first;
    // // insert(head);
    // //   //print(head);
    // //   cout<<endl;
    // // cout<<"length of LL is ";
    // // length(head);

    node*head=NULL;
    node*tail=NULL;
    insertAthead(head,tail,30);
    insertAthead(head,tail,20);
    insertAthead(head,tail,10);
    insertAttail(head,tail,60);
    insertAttail(head,tail,80);
    Delete(head,tail,4);
   // insertAtposition(head,tail,34,4);

    //cout<<getlength(head)<<endl;

    //insertAtposition(head,tail,80,position);
   //cout<<getlength(head);

    print(head);
   //cout<<getlength(head);

}