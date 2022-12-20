#include<iostream>
using namespace std;
inline void dspl(int *arry, int size){
	cout<<"\t\t\t";
	for(int i=0; i<size;i++){
		cout<<arry[i]<<", ";
	}
}



void 	merge(int *arry,int l,int m, int r){
	
	int i=l;
	int j=m+1;
	int k=l;
	int temp[100];
	while(i<=m &&j<=r){
		
		if(arry[i]<=arry[j]){
			temp[k]=arry[i];
			k++;
			i++;
		}else{
			temp[k]=arry[j];
			k++;
			j++;
		}
		
	}
		while(j<=r){
				temp[k]=arry[r];
				k++;
				j++;
		}
		while(i<=m){
				temp[k]=arry[i];
				k++;
				i++;
		}
	for(int t=l;t<=r;t++){
		arry[t]=temp[t];
	}
	
	
}

void mergesort(int * arry,int l, int r){
	if(l<r){
		int mid=(l+r)/2;
	mergesort(arry,l,mid); //left
	mergesort(arry,mid+1, r); //right
	
	merge(arry,l,mid,r);	
	}

	
	
}


 void bbl(int *arry, int size){
 	int temp; bool chk=false;
 	int j=size-2;
 while(j>=0){
 		for(int i=0; i<=j; i++){
 			if(arry[i]>arry[i+1]){
 				
 				temp=arry[i];
 				arry[i]=arry[i+1];
 				arry[i+1]=temp;
			 }
 			
		 } 
		 
		 j--;
 		
	}
	 	
 }






void insr(int *arry, int size){
	for(int i=1; i<size; i++){
		int key=arry[i];int j=i-1;
		while(j>=0&key<arry[j]){
			
			arry[j+1]=arry[j];
			j--;
		}
		arry[j+1]=key;
		
	}
	dspl(arry, size);
}
int main(){
loop1:
	
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
	cout<<"\n\t\t\t|                     -+-MENU-+-                              |";
	cout<<"\n\t\t\t ------------------+--------------+---------------------------";
cout<<"\n";
   
   cout<<"\n\t\t\t\t 1.Input Data";
   cout<<"\n\t\t\t\t 2.Bubble Sort";
   cout<<"\n\t\t\t\t 3.Insertion Sort";
   cout<<"\n\t\t\t\t 4.Merge Sort";
   cout<<"\n\t\t\t\t 5.Exit";
   cout<<"\n\t\t\t\t      Option: ";char opt; cin>>opt;
   
   
   
   switch(opt){
   	int size; int arry[100];
     	case '1':{ 
   		system("cls");
   		 cout<<"\n\n\t\t\t\t    Input The Size Of The Array: ";cin>>size; arry[size];
   		
   		for(int i=0; i<size; i++){
   			cout<<"\n\t\t\t\t    Input The Element  Of The Array at "<< i+1<<" : "; cin>>arry[i];
		   }
		  
		  	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '2':{ 
   	 bbl(arry,  size);dspl(arry, size);
   	    	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '3':{ 
   	insr(arry,size);
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '4':{ 
   	mergesort(arry,0, size);
   	dspl(arry, size);
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
