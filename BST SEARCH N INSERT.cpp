// Binary Search Tree - Implemenation in C++
// Simple program to create a BST of integers and search an element in it 
#include<iostream>
#define count 10
void print2d (int *,int);
int display_node(int* ,int );   //optionl but osm
using namespace std;
//Definition of Node for Binary search tree
struct BstNode {
	int data; 
	BstNode* left;
	BstNode* right;
};

// Function to create a new Node in heap
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

// To insert data in BST, returns address of root node 
BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
//To search an element in BST, returns true if element is found
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() 
{
	int space;
   	int choice;
   	int input;
   	int userdata;
	BstNode* root = NULL;  // Creating an empty tree
//	/Code to test the logic/
    
     cout<<"ENTER HOW MUCH = ";
     cin>>input;
     cout<<"THIS MUCH NODES = "<<input<<"\n";
     
     for(int i=0;i<input;i++)
     {
       cout<<"ENTER NUMBER <<i = ";
	   cin>>userdata;
	   	root = Insert(root,userdata);	
	 }
	 
	
	if(root == NULL)
	{
		cout<<"NO NODE\n EMPTY TREE\n";
	}
	
	 if(root->data != NULL)
	{
		cout<<" NODE 1 = "<<root->data<<"\n" ;
	}
	
	 if(root->left != NULL)
	{
		cout<<" NODE 2 = "<<root->left->data<<"\n" ;
	}
	
	if(root->right != NULL)
	{
		cout<<" NODE 3 = "<<root->right->data<<"\n" ;
	}
	
	if(root->left->left != NULL)
	{
		cout<<" NODE 4 = "<<root->left->data<<"\n" ;
	}
	
	if(root->left->right != NULL)
	{
		cout<<" NODE 5 = "<<root->left->right->data<<"\n" ;
	}
	
   	if(root->right->left != NULL)
	{
		cout<<" NODE 6 = "<<root->right->left->data<<"\n" ;
	}
	
	if(root->right->right != NULL)
	{
		cout<<" NODE 7 = "<<root->right->right->data<<"\n" ;
	}
	
	
	 
/* 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;
 	cout<<"DISPLAYING NODES = "<<root->data<<"\n" ;*/
     
	/*root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);*/
	// Ask user to enter a number. 
	 
	int number;
	cout<<"Enter number be searched\n";
	cin>>number;
	//If number is found, print "FOUND"
	if(Search(root,number) == true) 
	cout<<"Found\n";
	else 
	cout<<"Not Found\n";

    //print2d();
    
  

 return 0;	
}
     
/*
 void print2d(BstNode* root,int space)
 {
 	if(root == NULL)
 	{
 		cout<<"I AM HERE"<<"\n";
 		return;
 		
 		space += count;
	 }
 }
 */
