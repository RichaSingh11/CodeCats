
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

void *removeduplicates(node *head)
{	
	node *curr=head;
	while(curr!=NULL && curr->next!=NULL)
	{
		if(curr->data==curr->next->data)
		{
			node *temp=curr->next;
			curr->next=curr->next->next;
			delete(temp);
		}
		else	
			curr=curr->next;
	}
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
	head=addlast(head,20);
	head=addlast(head,40);
	head=addlast(head,50);
	removeduplicates(head);
	PrintList(head);
	
	return 0;
	
}






