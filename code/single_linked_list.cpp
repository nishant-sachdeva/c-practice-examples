#include <bits/stdc++.h>
using namespace std;

typedef struct book{
    int key;
    book* next;
};

void addNode(book * head, int key){
    book* new_node = new book;
    new_node->key = key;
    new_node->next = NULL;
    
    book* current = head;
    
    while(current){
        if(current->next == NULL){
           current->next = new_node;
           return;
        }
        current = current->next;
    }
}

void display_list(book* head){
    
    book* current = head;
    
    while(current){
        cout << current->key << endl;
        current = current->next;
    }
    return;
}

book* reverse_list(book* head) {
    book* current = head->next;
    head->next = NULL;

    while(current){
        book* temp = current->next;
        current->next = head;
        head = current;
        current = temp;
    }
    return head;
}


book* delete_list(book* head){
    book* current;
    
    while(head){
        cout << "Deleting element " << head->key << endl;
        current = head->next;
        delete head;
        head = current;
    }
    return head;
}

int main() {
	// your code goes here
	vector<int> arr = {6,7,8,9,3};
	
	book *head = new book;
	head->next = NULL;
	head->key = arr[0];
	
	for(int i = 1; i<arr.size(); i++){
	    addNode(head, arr[i]);
	}
	
	std::cout << "Books have been successfullly made. Will print the list now" << std::endl;
    
    display_list(head);
    
    head = reverse_list(head);
    cout << "reversing the linked list" << endl;
    display_list(head);
    
    cout << "deleting the list now" << endl;
    
    head = delete_list(head);
    if (head)
        cout << "not yet deleted" << endl;
    
	return 0;
}
