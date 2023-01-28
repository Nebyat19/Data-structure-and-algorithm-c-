/*

 #1  ------------------------+--quick sort--+------------------------------

 #2  ----------------------+--Exponential search--+-------------------------

*/
#include<iostream>
#include <cmath>
using namespace std;
// Display The List
inline void dspl(int *arry, int size){
	if(size!=0&&size){
			cout<<"\t\t\t\t";
	for(int i=0; i<size;i++){
		cout<<arry[i]<<", ";
	}
	}else  	cout<<"\t\t\t\tNo Data To Display";

}


/**** quick sort ***/
// Function to partition the array
int partion(int *arry, int lft, int rgt){
	int i=lft;
	int j=rgt;
	int key=arry[lft];// key element is the first element in the array
	int temp;
	while(i<j){
		do{
			i++;
		}while(arry[i]<=key);
		do{
			j--;
		}while(arry[j]>key);
		if(i<j) {//swap
			temp=arry[i];
			arry[i]=arry[j];
			arry[j]=temp;
		}
	}
	    //swap
			arry[lft]=arry[j];
			arry[j]=key;
			return j;
	
}
// Function to sort the array using Quick sort
void quick_sort(int *arry, int lft, int rgt){
	if(lft<rgt){
	int	j=partion(arry, lft,  rgt);
	quick_sort(arry, lft, j);
	quick_sort(arry, j+1,rgt);
	}

	
}
// Function to perform binary search
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
// Function to perform exponential search
int exponentialSearch(int arr[], int n, int num) {
    // If x is present at first location itself
    if (arr[0] == num)
        return 0;

    // Find range for binary search by repeated doubling
    int i = 1;
    while (i < n && arr[i] <= num) {
        i = i*2;
    }

    // Call binary search for the found range
    return binarySearch(arr, i/2, min(i, n), num);
}



int main(){
system("color 0a");	
 int size=0;
   int arry[100];
   int n;
   bool srted=false;
loop1:
	
	cout<<"\n\t\t\t ----------------------+--------------+-----------------------";
	cout<<"\n\t\t\t|                         -+-MENU-+-                          |";
	cout<<"\n\t\t\t ----------------------+--------------+-----------------------";
cout<<"\n";
cout<<"\t\t\t\t     =+= Quick Sort And Exponential search =+=";
cout<<"\n";
   
   cout<<"\n\t\t\t\t 1.Add Data";
   cout<<"\n\t\t\t\t 2.Sort";
   cout<<"\n\t\t\t\t 3.Search";
   cout<<"\n\t\t\t\t 4.Remove All Data";
   cout<<"\n\t\t\t\t 5.Display Data";
   cout<<"\n\t\t\t\t 6.Exit";
   cout<<"\n\t\t\t\t      Option: ";char opt; cin>>opt;
   
   
  
   switch(opt){
   	
     	case '1':{ 
   		system("cls"); srted=false;
   		 cout<<"\n\n\t\t\t\t    Input The Number Of Data: ";
			cin>>n; size+=n;
			arry[size];
   		
   		for(int i=size-n; i<size; i++){
   			cout<<"\n\t\t\t\t    Input The Value of "<< i+1<<" : "; cin>>arry[i];
		   }
		  
		  	cout<<"\n\t\t\t\t press any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '2':{ 
    	quick_sort(arry,0, size); srted=true;
   	dspl(arry, size);
   	    	cout<<"\n\t\t\t\t press any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '3':{ 
   if( srted){
   
int data;cout<<"\t\t\t\t    Input the Data: ";cin>>data; 
int result = exponentialSearch(arry, size, data);
    if (result == -1)
        cout  << "\t\t\t\t"<<data<<" not found in the List." << endl;
    else
        cout << "\t\t\t\t"<<data<<"  found at index " << result << endl;}else{
        	cout<<"\t\t\t\tThe Data Is Not Sorted"; 
		}
        
   	cout<<"\n\t\t\t\t press any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }
	   	case '4':{ 
   size=0;
cout<<"\t\t\t\t Data Has Been Deleted! ";
   	cout<<"\n\t\t\t\t press any key "; char opt; cin>>opt;  system("cls"); goto loop1;
		break;
	   }	
	   case '5':{ 
    	dspl(arry, size);
   	cout<<"\n\t\t\t\t press any key "; char opt; cin>>opt;  system("cls"); goto loop1;
   	
		break;
	   }
	    case '6':{ 
   	system("cls");
   	exit(0);
		break;
	   }
   }

system("pause");
return 0;	
}
