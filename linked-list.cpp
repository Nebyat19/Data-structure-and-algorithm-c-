#include<iostream>
using namespace std;

 struct node{
 	int data;
 	node * next;
 };
 		 node * head =new node;
  		 node * l2= new node;
  		 node * l3= new node;
  		 node * l4= new node;
  		 node * l5= new node;
  		 node * tail= new node;
         node * temp=new node;
         
         
int main(){
		 
   head->data=2;
	 head->next=l2;
	 l2->data=4;
	  l2->next=l3;
	 l3->data=6;
	  l3->next=l4;
   	 l4->data=8;
	  l4->next=l5;
	  l5->data=10;
	  l5->next=tail;
   	 tail->data=12;
	  tail->next=NULL;
	
	
loop1:
	
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
	cout<<"\n\t\t\t|                     -+-MENU-+-                              |";
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
cout<<"\n";
    cout<<"\n\t\t\t\t Linked List\n";
   cout<<"\n\t\t\t\t 1.Del Data";
   cout<<"\n\t\t\t\t 2.Insert Data";
   cout<<"\n\t\t\t\t 3.Get Data";
   cout<<"\n\t\t\t\t 4.Disp Data";
   cout<<"\n\t\t\t\t 5.Exit";
   cout<<"\n\t\t\t\t      Option: ";char opt; cin>>opt;
   	int count=1; int index;temp= head; 
   switch(opt){
   	case '1':{
   	node * ptr=new node;
   		 cout<<"\n\n\t\t\t\t    Input the index: ";cin>>index; 
   		while(count<=index){
   	
   	
   		 
   			if(count==index){
   				ptr=temp->next;
   				temp->data=ptr->data;
   				temp->next=	ptr->next;
   				temp=temp->next;
   				
   					
   			 	delete ptr; 
			   }
			   	temp=temp->next;
		  count++;
		   } 
   		
   	
  
   		node * x=new node; 
		  x=head;
		  cout<<"\n\t\t\t:  ";
  	while(x!=NULL) {
			   cout<<x->data; cout<<",";
			   	x=x->next;
			 }
			 	 
			cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   case '2':{
	   		node * ptr=new node; count=1; int data;
	   		
	   	
	   cout<<"\n\n\t\t\t\t    Input the index: ";cin>>index; 
	   cout<<"\n\t\t\t\t    Input the value: ";cin>>data; 
	   while(count<=index){
	   	if(index==1){
	   			ptr->data=data;
		   }
	   			else if(count==index-1){
   		     	ptr->data=data;
   		    	ptr->next=	temp->next;
   				temp->next=ptr; 
				   }
	   		   	temp=temp->next;
		  count++;
			   }
node * x=new node; 
		  x=head;
		  cout<<"\n\t\t\t:  ";
		  
  	while(x!=NULL) {
			   cout<<x->data; cout<<",";
			   	x=x->next;
			 }
			 	 
			cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '3':{
	   	temp= head; 	count=1;
	   		cout<<"\n\n\t\t\t\t    Input the index: ";cin>>index; 
   		while(count<index){
   			temp=temp->next; count++;
		   }
	   		 cout<<"\n\t\t\t:  "; cout<<temp->data;
   			cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	  	case '4':{
	  	 node * x=new node; 
		  x=head;
		  cout<<"\n\t\t\t:  ";
		  
  	while(x!=NULL) {
			   cout<<x->data; cout<<",";
			   	x=x->next;
			 }
		  	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
		  }
	   case '5':{ 
   	system("cls");
		break;
	   }
   }
   
   
   system("pause");
return 0;
}
