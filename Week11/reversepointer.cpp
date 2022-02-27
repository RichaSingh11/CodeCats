
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
	
	node(int x)
	{
		data=x;
		next=NULL;
	}
};

node *addlast(node *head,int x)
{
	node *temp=new node(x);
	
	if(head==NULL)
	return temp;
	
		node *curr=head;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
		return head;
}

node *reversepointer(node *head)
{
	node *prev=NULL;
	node *curr=head;	
	
	if(head==NULL)
	cout<<"Empty List \n";
	
	while(curr!=NULL)
	{
		node *next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	
	return prev;	
	
}

void PrintList(node *head)
 {
      node* temp = head;
      
      if(temp==NULL)
      cout<<"The list is empty.\n";
      else if(temp != NULL)
	   {
        cout<<"Reverse list contains: ";
        while(temp != NULL) 
		{
          cout<<temp->data<<" ";
          temp = temp->next;
        }
    	}
        cout<<endl;
}    

int main()
{
	node *head=NULL;
	head=addlast(head,10);
	head=addlast(head,20);
	head=addlast(head,30);
	head=addlast(head,40);
	head=addlast(head,50);
	head=reversepointer(head);
	PrintList(head);
	
	return 0;
	
}






