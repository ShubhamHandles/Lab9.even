#include<iostream>
using namespace std;

class BH{
	public:
	//array pointer
	int* hArr;
	//max size of array
	int mSize;
	//current size of array
	int cSize;

	//default constructor
	BH(int mSize){
		hArr = new int[mSize];
		this->mSize = mSize;
		cSize = 0; 
	}

	//swap
	void swap(int* a, int* b){
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	//parent
	int parent(int i){
		return (i-1)/2;
	}
	//left
	int left(int i){
		return (i*2)+1;
	}
	//right
	int right(int i){
		return (i*2)+2;
	}
	//get min
	int getMin(){
		return hArr[0];
	}
	//insert
	void insert(int value){
		//Base case for Heap Overflow
		if(cSize==mSize){
			cout << "Heap Overflow" << endl;
			return;
		}
		//Insert the new key at the end
		int i = cSize++;
		hArr[i] = value;
		//Check it for all hierarchy with loop

		//Check if it breaks the heap property and fix it 
	}

	//display
	//extract min
	//decrease key
	//delete key at
	//MinHeapify
};

int main(){

	return 0;
}
