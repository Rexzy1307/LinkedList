#include <iostream>
using namespace std;


--dirubah ke double linked list dari tugas kemarin 
struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void traverseMaju(struct Node *temp)
{
	int i = 0;
	if (temp != NULL) {
	    cout << "--- Traversal Maju (Forward) ---" << endl;
		do {
			cout << "data ke " << i + 1 << ": " << temp->data << endl;
			temp = temp->next;
			i++;
		} while(temp != NULL);
	}
	cout << "Jumlah data: "<< i << endl << endl;
};

void traverseMundur(struct Node *temp)
{
	int i = 0;
	if (temp != NULL) {
	    cout << "--- Traversal Mundur (Backward) ---" << endl;
		do {
			cout << "data mundur ke " << i + 1 << ": " << temp->data << endl;
			temp = temp->prev;
			i++;
		} while(temp != NULL);
	}
	cout << "Jumlah data: "<< i << endl << endl;
};


int main(){
	
	Node *node1 = new Node;
	Node *node2 = new Node;
	Node *node3 = new Node;
	
	node1->data = 10;
	node1->prev = NULL;
	node1->next = node2;
	
	node2->data = 20;
	node2->prev = node1;
	node2->next = node3;
	
	node3->data = 30;
	node3->prev = node2;
	node3->next = NULL;
	
	traverseMaju(node1);
	traverseMundur(node3);
    
    return 0;
}
