#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left, *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void printLeftView(Node* root)
{
	if(!root)
		return;
	
	queue<Node*> q;
	q.push(root);
	
	while(!q.empty())
	{
		int n = q.size();
		
		for(int i=1;i<=n;i++)
		{
			Node* temp = q.front();
			q.pop();
			
			if(i==1)
				cout<<temp->data<<" ";
				
			if(temp->left != NULL)
				q.push(temp->left);	
				
			if(temp->right != NULL)
				q.push(temp->right);	
		}
	}	
}

int main()
{
	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);
	root->right->left = newNode(7);
	root->right->right->left = newNode(8);
	
	printLeftView(root);
}
