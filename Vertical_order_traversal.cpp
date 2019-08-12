#include<iostream>
#include<map>
#include<vector>
using namespace std;
	class node
	{
		public:
		int data;
		node* left;
		node* right;
		node();
		node(int data);
		void print_vertical_order(node* );
		void get_vertical_order(node* ,map<int, vector<int> > &m, int);
	};
	node::node()
	{
		
	}
	node::node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	void node::get_vertical_order(node* root,map<int, vector<int> > &m, int hd)
	{
		if(root == NULL)
		{
			return;
		}
		else
		{
		m[hd].push_back(root->data);
		get_vertical_order(root->left, m, hd-1);
		get_vertical_order(root->right, m, hd+1);
		}
	}
	void node::print_vertical_order(node* root)
	{
		/*Creating map and store vertical order into the map
		  by using get_vertical_order function*/ 
		  map<int, vector<int> > m;
		  int hd = 0;
		  get_vertical_order(root,m,hd);
		  map<int, vector<int> >::iterator it;
		  cout<<"Vertical Order Traversal:\n";
		  for(it = m.begin(); it != m.end(); it++)
		  {
		  	for(int i = 0;i< it->second.size(); i++)
		  	{
		  		cout<<it->second[i]<<"\t";
			}
			cout<<"\n";
		  }
	}
	int main()
	{
		node *root;
		node obj;
		root = new node(1);
		root->left = new node(2); 
	    root->right = new node(3); 
	    root->left->left = new node(4); 
	    root->left->right = new node(5); 
	    root->right->left = new node(6); 
	    root->right->right = new node(7); 
	    root->right->left->right = new node(8); 
	    root->right->right->right = new node(9); 
	    obj.print_vertical_order(root);
	}
