
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
		
node *addfirst(node *head,int x)	
{	
	node *temp=new node(x);
	temp->next=head;
	
	return temp;
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
	head=addfirst(head,10);
	head=addfirst(head,20);
	head=addfirst(head,30);
	head=addfirst(head,40);
	head=addfirst(head,50);
	PrintList(head);
	
	return 0;
	
}



