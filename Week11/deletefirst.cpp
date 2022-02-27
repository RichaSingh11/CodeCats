
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

node *deletefirst(node *head)
{
	if(head==NULL)
	cout<<"Empty List";
	
	node *curr=head;
	head=head->next;
	delete(curr);
	
	return head;
}
	
	
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

void PrintList(node *head)
 {
      node* temp = head;
      
      if(temp==NULL)
      cout<<"The list is empty.\n";
      else if(temp != NULL)
	   {
        cout<<"The list contains: ";
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
	head=deletefirst(head);
	PrintList(head);
	
	return 0;
	
}



