#include <iostream>
using namespace std;


struct Node {
	int data;
	struct Node *next;
};

void traverse(struct Node *temp)
{
	int max;
	int i = 0;
	while(temp != NULL){ 
		cout << "data ke" << i + 1<< ": ";
		if (temp -> data > max){
			max = temp -> data;
		}
		cout << temp -> data;
		temp = temp -> next;
		cout << endl;
		i++;
	}
	cout << "Data Terbesar Adalah: "<< max << endl;
};


int main(){
	
	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	Node *node4 = NULL;
	Node *node5 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	node4 = new Node;
	node5 = new Node;
	
	node1-> data = 83;
	node1-> next = node2;
	
	node2-> data = 91;
	node2-> next = node3;
	
	node3-> data = 100;
	node3-> next = node4;
	
	
	node4-> data = 74;
	node4-> next = NULL;
	
	cout << "data linked list: " << endl;
	traverse(node1);
}

