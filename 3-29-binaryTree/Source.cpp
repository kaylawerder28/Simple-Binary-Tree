#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node *left;
	Node * right;
	Node() {}
	Node(int x) { data = x; left = nullptr; right = nullptr; }
};

int main()
{
	Node * root = new Node(1);
	Node*n1 = new Node(2);
	root->left = n1;

	
	root->right =  new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->right->left = new Node(6);
	cout << " " << root->data << endl;
	cout << root->left->data << " " << root->right->data << endl;
	getchar();
}