#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void traverse(struct Node *temp)
{
	int i = 0;
	if (temp == NULL) return;
	
	int max = temp->data; 
	struct Node *lastNode; 
	
	cout << "forward" << endl;
	while(temp != NULL){
		cout << "data ke " << i + 1 << ": " << temp->data << endl;
		
		if (temp->data > max){
			max = temp->data;
		}
		
		lastNode = temp; 
		temp = temp->next;
		i++; 
	}
	
	cout << "Data Terbesar Adalah: "<< max << endl;
	
	cout << "\n \nBackward" << endl;
	int min = lastNode -> data;
	while(lastNode != NULL){
		cout << "data ke " << i << ": " << lastNode->data << endl;
		if(lastNode -> data < min){
			min = lastNode -> data;
		}
		lastNode = lastNode -> prev;
		i--;
	}
	cout << "Data Terkecil Adalah: " << min << endl;
};

int main(){
	
	Node *node1 = new Node;
	Node *node2 = new Node;
	Node *node3 = new Node;
	Node *node4 = new Node;
	
	node1->data = 10;
	node1->prev = NULL;
	node1->next = node2;
	
	node2->data = 20;
	node2->prev = node1;
	node2->next = node3;
	
	node3->data = 30;
	node3->prev = node2;
	node3->next = node4;
	
	node4->data = 40;
	node4->prev = node3;
	node4->next = NULL;
	
	cout << "data double linked list: " << endl;
	traverse(node1);
	
    
    return 0;
}
