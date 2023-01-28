#include<iostream>

//LINKED LIST
using  namespace std;

class List{
	private:
		struct node{
			int data;
			node *next;
		};
	node *head =new node;
	
 public:		
	List(){
		head=NULL;
	}
	~List(){
		node *next =new node;
		next=head;
		while(next!=NULL){
			node *temp=new node;
			temp=next;
			delete temp;
			next=next->next;
		}
	}
	
 bool isEmpty(){
 	return (head==NULL);
 }	
void add(int data, int index=0)	{
	node * p=new node;
	node * temp=  new node;
	p->data=data;
	if(index==0){
		if(head==NULL){
			head=p;
			head->next=NULL; 
		} 
		else {
			temp=head;
			head=p;
			head->next=temp;	
		}
	}else if(index==-1){
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		} temp->next=p; p->next=NULL;
	}
	else{
		int count=1;temp=head;
		while(count<index-1){
			count++;
			temp=temp->next;
		}
		p->next=temp->next;
		temp->next=p;
	}
}
void del(int index=0){
		node * temp= new node;
	if(index==0){
		temp=head;
		head=head->next;
		delete temp;
	}else if(index==-1){
		
			 node * p= new node; p=head;
		while(p->next->next!=NULL){
			p=p->next;
		}	temp=p->next; p->next=NULL; delete temp;
		
	}else{
		 node * p= new node; p=head; int count=1;
		while(count<index-1){
			count++;
			p=p->next;
		}
		temp=p->next;
		p->next=p->next->next;
		
		delete temp;
		
	}
	
}
int search(int val){
	int count=1; node *p= new node; p=head; int index=0;
	while(p!=NULL){
		if(p->data==val){
			return index=count; break;
		}
		count ++;
		p=p->next;
	}
	return index;
}
int val(int index){
	int count=1; node* p=new node; p=head;
	while(count<index&p->next!=NULL){
		count++; p=p->next;
	}
	return p->data;
}
void disp(){
	node * p=new node; 
	p=head;
	while(p!=NULL) {
		cout<<p->data<<", ";
		 p=p->next;
	}
	
}
};



int main(){
	List num;

	num.add(55);//ad at first
	num.add(15);
	num.add(10005);
	num.add(22,2);
	num.add(3,3);
	num.add(20,2);
	num.disp();
	cout<<"\n";
	num.del(3);
	num.disp();
	cout<<"\n";
	num.del(-1);//delete at end
	num.disp();
	cout<<"\n";
	num.del();
	num.add(4,4); //ad at 4
	num.add(5,5);
	num.add(321,-1); //add at end
	num.del(5);//delete at 5
	num.del();//delete at first
	num.disp();
	if(num.search(321)!=0) cout<<"fount at: "<<num.search(321);
	cout<<"\n"<<num.val(3);
		return 0;
}
