#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

node* takeinput(){
	node* head=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		node* n=new node(data);
		n->next=head;
		head=n;
		cin>>data;
	}
	return head;
}

void print(node* head){
	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<endl;
}

void reverse(node* &head){
	node* prev=NULL;
	node* current=head;
	node* n;
	while(current!=NULL){
	n=current->next;
	current->next=prev;
	prev=current;
	current=n;
}
head=prev;
}
	
int main(){
	node* head=NULL;
	head=takeinput();
	print(head);
	reverse(head);
	print(head);
	return 0;
}
