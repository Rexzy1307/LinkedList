#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
	struct Node *prev;
};

void traverse(struct Node *temp)
{
	int totalMaju = 0;
	int i = 0;
	
	if (temp == NULL) return;
	
	struct Node *lastNode; 
	
	cout << " forward " << endl;
	while(temp != NULL){
		cout << "data ke " << i + 1 << ": " << temp->data << endl;
		totalMaju += temp->data;
		
		lastNode = temp; 
		temp = temp->next;
		i++; 
	}
	cout << "Total Nilai Data Forward : "<< totalMaju << endl;
	
	cout << "\n backward " << endl;
	
	int totalMundur = 0;
	
	while(lastNode != NULL){
		cout << "data ke " << i << ": " << lastNode->data << endl;
		totalMundur += lastNode->data;
		
		lastNode = lastNode->prev; 
		i--; 
	}
	cout << "Total Nilai Data Backward : " << totalMundur << endl;
};

int main(){
	
	Node *node1 = new Node;
	Node *node2 = new Node;
	Node *node3 = new Node;
	Node *node4 = new Node;
	
	node1->data = 15;
	node1->prev = NULL;
	node1->next = node2;
	
	node2->data = 25;
	node2->prev = node1;
	node2->next = node3;
	
	node3->data = 30;
	node3->prev = node2;
	node3->next = node4;
	
	node4->data = 330;
	node4->prev = node3;
	node4->next = NULL;
	
	cout << "data double linked list: " << endl;
	traverse(node1);
	
    return 0;
}
