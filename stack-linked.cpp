#include<iostream>

using namespace std;


class Stack{
/*
 top, push, pop
  
*/	
private:
	struct node{
		int data;
		node * next;
	}; node *tail= new node;
	
	
public:
	Stack(){
		tail=NULL;
	}
	void push(int data){
	  node *p=new node;
	   p->data=data;
	   p->next=tail;
	    tail=p; 
		
	}
	int top(){
		return tail->data;
	}
	int pop(){
		node * p= new node;
		int val =tail->data;
		p=tail;
		tail=tail->next;
			delete p;
			return val;	
	}
	bool isEmpty(){
		return (tail==NULL);
	}
};
int main(){
	
	Stack stack;
  	stack.push(4);
	 stack.push(65);
	  stack.pop(); stack.pop();
	cout<<stack.isEmpty();
	
	return 0;
}
