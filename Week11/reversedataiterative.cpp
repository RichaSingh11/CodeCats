
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

node *reversedata(node *head)
{
	vector <int> arr;
	
	if(head==NULL)
	cout<<"Empty List \n";
	
	for(node *curr=head;curr!=NULL;curr=curr->next)
	{
		arr.push_back(curr->data);
	}
	
	for(node *curr=head;curr!=NULL;curr=curr->next)
	{
		curr->data=arr.back();
		arr.pop_back();
	}
	
	return head;	
	
}

void PrintList(node *head)
 {
      node* temp = head;
      
      if(temp==NULL)
      cout<<"The list is empty.\n";
      else if(temp != NULL)
	   {
        cout<<"Reverse  list contains: ";
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
	head=reversedata(head);
	PrintList(head);
	
	return 0;
	
}



