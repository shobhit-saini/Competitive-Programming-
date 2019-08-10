#include<iostream>
using namespace std;
	struct linkedlist
	{
		int data;
		struct linkedlist* next;
	};
	struct linkedlist* head;
	void reverse(struct linkedlist* ptr)
	{
		if(ptr->next==NULL)
		{
			head=ptr;
			return;
		}
		else
		{
			reverse(ptr->next);
			struct linkedlist* qtr=ptr->next;
			qtr->next=ptr;
			ptr->next=NULL;
		}
	}
	int main()
	{
///////////////CREATION OF LINKED LIST////////////////////////
		int n;
		cout<<"Enter the size of linked list:";
		cin>>n;
		cout<<"Enter the elements in linked list:\n";
		struct linkedlist* p,*ptr;
		p=new linkedlist;
		cin>>p->data;
		head=p;
		ptr=p;
		for(int i=1;i<n;i++)
		{
			p=new linkedlist;
			cin>>p->data;
			p->next=NULL;
			ptr->next=p;
			ptr=ptr->next;
		}
//////////////DISPLAY OF LINKEDLIST//////////////////////////
		cout<<"Display the linkedlist:\n";
		ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
////////////REVERSE THE LINKEDLIST///////////////////////
		reverse(head);
/////////////PRINTING OF THE REVERSE LINKEDLIST///////////
		cout<<"\nReverse linkedlist:\n";
		ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
	}
