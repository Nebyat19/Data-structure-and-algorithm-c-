#include<iostream>
using namespace std;
inline void dspl(int *arry, int size){
	cout<<"\t\t\t";
	for(int i=0; i<size;i++){
		cout<<arry[i]<<", ";
	}
}



int main(){
	 int arry[100]={2,4,6,8,10,12};
	 int size=6, index;
loop1:
	
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
	cout<<"\n\t\t\t|                     -+-MENU-+-                              |";
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
cout<<"\n";
    cout<<"\n\t\t\t\t Array List\n";
   cout<<"\n\t\t\t\t 1.Del_Data";
   cout<<"\n\t\t\t\t 2.Insert_Data";
   cout<<"\n\t\t\t\t 3.Get_Data";
   cout<<"\n\t\t\t\t 4.Disp_Data";
   cout<<"\n\t\t\t\t 5.Exit";
   cout<<"\n\t\t\t\t      Option: ";char opt; cin>>opt;
   
   
   
   switch(opt){
   
     	case '1':{ 
   	
   		 cout<<"\n\n\t\t\t\t    Input the index: ";cin>>index; 
   		for(int i=index+1;i<size; ++i)	arry[i-1]=arry[i];
   	
   	size-=1;
		  dspl(arry,size);
		  	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '2':{ 
            int data;
   	    	cout<<"\n\t\t\t\t  Input the index: "; cin>>index;
   	    	cout<<"\n\t\t\t\t  Input the data: "; cin>>data;
   	    		size+=1;
   	    	for(int i=size-1; i>=index; --i) arry[i+1]=arry[i]; arry[index]=data;
			   
			 dspl(arry,size);
		  	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '3':{ 
	cout<<"\n\t\t\t\t  Input the index: "; cin>>index;
		cout<<"\n\t\t\t\t value: ";cout<<arry[index];
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	  	case '4':{
	  	 dspl(arry,size);
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
