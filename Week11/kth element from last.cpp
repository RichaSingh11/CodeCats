
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

node *kthfromlast(node *head,int k)
{
	int len=0;
	for(node *curr=head;curr!=NULL;curr=curr->next)
	{
		len++;
	}
	
	if(len<k)
	return 0;
	
	node *curr=head;
	for(int i=1;i<=(len-k);i++)
	{
		curr=curr->next;
	}
	
	cout<<curr->data<<" ";
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
	int k;
	node *head=NULL;
	head=addlast(head,10);
	head=addlast(head,20);
	head=addlast(head,30);
	head=addlast(head,40);
	head=addlast(head,50);
	PrintList(head);
	
	cout<<"Enter the value of k \n";
	cin>>k;
	cout<<" Element from last is \n";
	head=kthfromlast(head,k);
	
	return 0;
	
}






