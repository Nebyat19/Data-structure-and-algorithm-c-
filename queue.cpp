
#include<iostream>
using namespace std;
class Queue{
	/**
	push, pop, front
	*/
	private:
		struct node{
			int data;
			node * next;
		}; node * head=new node;
		
	public:
		Queue(){
		 head=NULL; 
		}
		~Queue(){
			node *p= new node; p=head;
			while(p->next!=NULL){
				node * temp= new node;
				temp=p;
			    p=p->next; 
				delete temp;
			}
		}
		void push(int data){
		
			node  * q= new node;	q->data=data;q->next=NULL;
			if(head==NULL) head=q;
			else{
					node * p= new node; p=head;
			while(p->next!=NULL) p=p->next;
	    p->next=q;	
			} 
		}	
		int pop(){
			node * temp= new node; temp=head;
			int data = temp->data;
			head=head->next;
			delete temp;
			return data;
		}
		int front(){
			return head->data;
		}
		void disp(){
			cout<<"\n";
			node * p= new node;
			p=head;
			while(p!=NULL){
				cout<<p->data<<" ,"; p=p->next;
			}
		}
		bool isEmpty(){
			return head==NULL;
		}
		
		
	
};

int main(){
	Queue que;
	que.push(0);	
	que.push(1);
	que.push(2);
	que.disp();
	que.pop();
	que.pop();cout<<que.front();
	que.push(03);	
	que.push(11);
	que.push(22);
	que.disp();
	return 0;
}
