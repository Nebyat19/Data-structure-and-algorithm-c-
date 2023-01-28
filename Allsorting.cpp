#include<iostream>

/*
*
								 1.Bubble Sort
                                 2.Insertion Sort
                                 3.selection Sort
                                 4.quick Sort
                                 5.Merge Sort
*    
#Powered by Tiletsolution 
*/
using namespace std;
inline void dspl(int *arry, int size){
	cout<<"\t\t\t";
	for(int i=0; i<size;i++){
		cout<<arry[i]<<", ";
	}
}

/***** insertion****/

void insertion_sort(int * arry, int size){
	
	for(int i=1;i<size;i++){
		int key=arry[i] ;int j=i-1;
		while(j>=0&&key<arry[j]){
			arry[j+1]=arry[j];
			j--;
		}
		
		arry[j+1]=key;
		
	}
	
}
/****** selection*****/
void selection_sort(int * arry, int size){
		int small,temp;
	for(int i=0; i<size;++i){
		small =i;
		for(int j=i+1; j<size; j++) 
		if(arry[j]<arry[small]) small =j;
	temp=arry[small];
	arry[small]=arry[i];
	arry[i]=temp;	
	}

}
/***** bubble******/
void bubble_sort(int * arry, int size){
	int temp;
for(int i=0;i<size;i++){
	for(int j=0; j<size-1-i; j++){
		if(arry[j]>arry[j+1]) {
			temp=arry[j];
			arry[j]=arry[j+1];
			arry[j+1]=temp;
		}
	}
}

	dspl(arry, size);
}
/********merge **/
void 	merge(int *arry, int lft,int mid, int rgt){
    int temp[100];
	int i=lft;
	int j=mid+1;
	int k=lft;
	while(i<=mid&&j<=rgt)
	{
		if(arry[i]<arry[j]){
		temp[k]=arry[i];
		i++;	
		}
		else{
	    temp[k]=arry[j];
		j++;
		}
		k++;
	}
	while(i<=mid){
		temp[k]=arry[i];
		i++; k++;
	}
		while(j<=rgt){
		temp[k]=arry[j];
		j++; k++;
		}
	
 for(int t=lft; t<=rgt;++t){
 	arry[t]=temp[t];
 }
}
void mergesort(int * arry, int lft, int rgt){
if(lft<rgt){
	int mid=(lft+rgt)/2;
	mergesort(arry, lft, mid);      //left
	mergesort(arry, mid+1,  rgt); //right
	merge(arry, lft, mid, rgt);
}

}
/******* quick sort****/
int partion(int *arry, int lft, int rgt){
	int i=lft;
	int j=rgt;
	int key=arry[lft];
	int temp;
	while(i<j){
		do{
			i++;
		}while(arry[i]<=key);
		do{
			j--;
		}while(arry[j]>key);
		if(i<j) {
			temp=arry[i];
			arry[i]=arry[j];
			arry[j]=temp;
		}
	}
	
			arry[lft]=arry[j];
			arry[j]=key;
			return j;
	
}
void quick_sort(int *arry, int lft, int rgt){
	if(lft<rgt){
	int	j=partion(arry, lft,  rgt);
	quick_sort(arry, lft, j);
	quick_sort(arry, j+1,rgt);
	}

	
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
   cout<<"\n\t\t\t\t 4.selection Sort";
   cout<<"\n\t\t\t\t 5.quick Sort";
   cout<<"\n\t\t\t\t 6.Merge Sort";
   cout<<"\n\t\t\t\t 7.Exit";
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
   	 bubble_sort(arry,  size);
   	    	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '3':{ 
   	insertion_sort(arry,size);dspl(arry, size);
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '4':{ 
   	selection_sort(arry,size);
   	dspl(arry, size);
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }	
	   case '5':{ 
   	quick_sort(arry,0, size);
   	dspl(arry, size);
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	    case '6':{ 
   	mergesort(arry,0, size);
   	dspl(arry, size);
   	cout<<"\n\t\t\t\t pres any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	    case '7':{ 
   	system("cls");
		break;
	   }
   }

system("pause");
return 0;	
}
