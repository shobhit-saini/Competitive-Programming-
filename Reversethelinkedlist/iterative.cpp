#include<iostream>
using namespace std;
	struct linkedlist
	{
		int data;
		struct linkedlist* next;
	};
	int main()
	{
///////////////CREATION OF LINKED LIST////////////////////////
		int n;
		cout<<"Enter the size of linked list:";
		cin>>n;
		cout<<"Enter the elements in linked list:\n";
		struct linkedlist* p,*ptr,*head;
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
		struct linkedlist* qtr,*str;
		ptr=NULL;
		qtr=head;
		str=qtr->next;
		while(qtr!=NULL)
		{
			qtr->next=ptr;
			ptr=qtr;
			qtr=str;
			if(str!=NULL)
			{
				str=str->next;
			}
			else
			{
				head=ptr;
			}
		}
/////////////PRINTING OF THE REVERSE LINKEDLIST///////////
		cout<<"\nReverse linkedlist:\n";
		ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<"\t";
			ptr=ptr->next;
		}
	}
