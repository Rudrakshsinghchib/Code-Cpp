#include<iostream>                //doubly LL
using namespace std;
class node {
    public:
    int data;
    node*next;
    node*prev;

    node() {
        this->next=NULL;
        this->prev=NULL;
    }

    node(int data) {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void insertathead(node*&head,node*&tail,int data)
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
        head->prev=newnode;
        head=newnode;
    }
    
}
void insertattail(node*&head,node*&tail,int data)
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
        newnode->prev=tail;
        tail=newnode;
    }

}
int Length(node*&head)
{
    node*temp=head;
    int len=0;

    // doubt--while(temp->next=NULL)
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
void insertatposition(node*&head,node*&tail,int data,int position)
{
    int leng=Length(head);
    if(position==1)
    {
        insertathead(head,tail,data);
    }
    else if(position==leng+1)
    {
        insertattail(head,tail,data);
    }
    else
    {
        node*newnode=new node(data);
        node*prevnode=NULL;
        node*curr=head;
        while(position!=1)
        {
            prevnode=curr;
            curr=curr->next;
            position--;

        }
        prevnode->next=newnode;
        newnode->prev=prevnode;
        curr->prev=newnode;
        newnode->next=curr;

    }

}
void deletefromhead(node*&head,node*&tail)
{
    if(head==NULL)
    {
        cout<<"nah"<<endl;
    }
    if(head==tail)
    {
        node*temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    else
    {
        node*newnode=head;
        head=head->next;
        newnode->next=NULL;
        newnode->prev=NULL;
        delete newnode;
    }

}
void deletefromtail(node*&head,node*&tail)
{ 
    if(head==NULL)
    {
        cout<<"nah"<<endl;
    }
    if(head==tail)
    {
        node*temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    else
    {
        // node*temp=tail;
        // tail=tail->prev;
        // temp->prev=NULL;
        // temp->next=NULL; // see why this not working
        // delete temp;
        node*temp=tail->prev;
        temp->next=NULL;
        tail->prev=NULL;
        delete tail;
    }
}
void deletefromposition(node*&head,node*&tail,int position)
{ 
    int leng=Length(head);
    if(position==1)
    {
       deletefromhead(head,tail);
    }
    if(position==leng)
    {
       deletefromtail(head,tail);
    }
    else
    {
        node*prevnode=NULL;
        node*curr=head;
        while(position!=1)
        {
            prevnode=curr;
            curr=curr->next;
            position--;
        }    
        node*after=curr->next;
         prevnode->next=after;
        after->prev=prevnode;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
}


int main() {
    node*head=NULL;
    node*tail=NULL;
    insertathead(head,tail,40);
    insertathead(head,tail,30);
    insertathead(head,tail,20);
    insertathead(head,tail,10);
    insertattail(head,tail,50);
    insertatposition(head,tail,90,3);
    deletefromposition(head,tail,4);

    
    print(head);


    //cout<<Length(head)<<endl;
}