
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

node *deleteatindex(node *head,int pos)
{
	if(head==NULL)
	cout<<"Empty List \n";
	
	node *curr=head;
	while(curr->next!=NULL)
	{
		for(int i=1;i<=pos-1;i++)
			{
				curr=curr->next;
			}
		curr->next=curr->next->next;
		delete(curr->next);
	}
	
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
	head=deleteatindex(head,pos);
	PrintList(head);
	
	
}



