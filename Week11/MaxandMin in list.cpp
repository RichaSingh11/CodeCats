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

int maxinnodes(node *head)
{	
    
	int max=INT_MIN;
	node *curr=head;
	while(curr!=NULL)
	{
		if(max<curr->data)
		{
		    max=curr->data;
		}
		    curr=curr->next;
	}
	return max;
}

int mininnodes(node *head)
{	
	int min=INT_MAX;
	node *curr=head;
	while(curr!=NULL)
	{
		if(min>curr->data)
		{
		    min=curr->data;
		}
		    curr=curr->next;
	}
	return min;
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
	head=addlast(head,30);
	head=addlast(head,60);
	head=addlast(head,20);
	head=addlast(head,40);
	head=addlast(head,50);
	PrintList(head);
	
	cout<<"Maximum element of the list is: "<<maxinnodes(head)<<endl;
	cout<<"Minimum element of the list is: "<<mininnodes(head)<<endl;

	return 0;
}

