#include<iostream>

using namespace std;

class Alist{
	private:
		int *alist;
		int MAX_SIZE;
		int curr;
		int size;
	public:
	 Alist(int maxSize=100){
	 	MAX_SIZE=maxSize;
	 	alist = new int[MAX_SIZE];
	 	curr=0;
	    size=0;	
	 }
	 ~Alist(){
	 	delete [] alist;
	 }	
	
	void add(int data, int index){
		size++;
		for(int i=size-1;i>index; --i){
				alist[i]=alist[i-1];      
		}
		alist[index]=data;
	}	
	void del(int index){
		
		for(int i=index;i<size-1;++i){
			alist[i]=alist[i+1];
		}
		size--;
	}
	
	int get(int index) return alist[index];	
	bool isFull() return (size==MAX_SIZE);
	bool isEmpty() return (size==0);
	
	
};



int main(){
	Alist list;
	
	return 0;
}
