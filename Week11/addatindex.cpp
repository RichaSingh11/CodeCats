
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

node *addatindex(node *head,int x,int pos)
{
	node *temp= new node(x);
	if(pos==1)
	{
		temp->next=head;
		return temp;
	}
	
	node *curr=head;
	
		for(int i=1;i<=pos-2 && curr!=NULL;i++)
			{
				curr=curr->next;
			}
			
			if(curr==NULL)
			return head;
			
		temp->next=curr->next;
		 curr->next=temp;
	
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
	head=addatindex(head,60,3);
	PrintList(head);
	
	
}



