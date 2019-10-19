//This is  code for Linked list
#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class linked_list{
    public:
	node *head;
	int size;
    linked_list(){
    	size = 0;
    	head = NULL;
	}
	
	void insertFront(int a){
		size++;
		node *tmp = new node;
		tmp -> data = a;
		tmp -> next = head;
		head = tmp;
	}
	
	void Append(int a){
		if(head == NULL){
			insertFront(a);
			return;
		}
		node *tmp = new node;
		tmp -> data = a;
		tmp -> next = NULL;
		node *t = head;
		while(t->next!=NULL){
			t = t->next;
		}
		t -> next = tmp;
		size++;
	}
	
	void insertPos(int a, int p){
		if(head == NULL){
			insertFront(a);
			return;
		}
		if(p<0 || p>size){
			cout<<"Invalid Position!  Size = "<< size<<endl;
			return;
		}
		node *tmp = new node;
		tmp -> data = a;
		node *t = head;
		for(int i = 0; i<p && p<size ; i++){
			t = t->next;
		}
		tmp->next = t->next;
		t->next = tmp;
		size++;
	}
	
	int delBack(){
		if(head == NULL)
			return  -1;
		node *last = head,*prev = head;
		while(last->next!=NULL){
			prev = last;
			last = last->next;
		}
		int x = last -> data;
		delete last;
		prev ->next = NULL;
		size--;
		if(size == 0)
			head = NULL;
		return x;
	}
	
	int delPos(int p){
		if(head == NULL || p>size || p<=0)
			return -1;
		node *pos = head, *prev = head;
		if(size == 1)
			return delFront();
		for(int i=1;i<p;i++){
			prev = pos;
			pos = pos->next;
		}
		prev->next = pos->next;
		int x = pos->data;
		delete pos;
		size--;
		if(size == 0)
			head = NULL;
		return x;
	}
	
	int delFront(){
		if(head == NULL)
		 	return -1;
		node *tmp = head;
		int x = head->data;
		delete head;
		head = tmp->next;
		size--;
		if(size == 0)
			head = NULL;
		return x;
	}
	
	void display(){
		if(head == NULL){
			cout<<"List is Empty!"<<endl;
			return;
		}
		node *tmp = head;
		cout<<"\n";
		cout<<"["<<tmp->data<<"]->";
		if(tmp->next!=NULL){
			do{
				tmp = tmp->next;
				cout<<"["<<tmp->data<<"]->";
			}while(tmp->next!=NULL);
		}	
		cout<<"NULL\n";
	}
};

int main(){
	linked_list l;
	int a,data,pos;
	bool Flag = true;
	int Choice;
	while(Flag){
		cout<<"Menu:\n1.InsertFront.\n2.InsertBack.\n3.Insert at position.\n4.DeleteFront.\n5.DeleteBack.\n6.Delete at position.\n7.Display List.\n8.Exit.\t:->";
		
		cin>>Choice;
		switch(Choice){
			case 1:
				cout<<"Enter:";
				cin>>data;
				l.insertFront(data);
				break;
			case 2:
				cout<<"Enter:";
				cin>>data;
				l.Append(data);
				break;
			case 3:
				cout<<"Enter(Data Position):";
				cin>>data>>pos;
				l.insertPos(data,pos);
				break;
			case 4:
				cout<<"Deleted: "<<l.delFront()<<endl;
				break;
			case 5:
				cout<<"Deleted: "<<l.delBack()<<endl;
				break;
			case 6:
				cout<<"Enter Position:";
				cin>>pos;
				cout<<"Deleted: "<<l.delPos(pos)<<endl;
				break;
			case 7:
				l.display();
				break;
			case 8:
				Flag = false;
				break;
			default:
				cout<<"Invalid Option!"<<endl;
		}
		Choice = 0;
		
	}
}
