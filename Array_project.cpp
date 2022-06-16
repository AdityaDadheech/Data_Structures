#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array{
	int *a;
	int length = 0;
	int size;
};

void display(struct Array arr){
	cout<<"Elements are:"<<endl;
	for(int i = 0;i<arr.length;i++){
		cout<<arr.a[i]<<"\t";
	}
	cout<<endl;
}

void append(struct Array *arr,int x){
	if(arr->length<arr->size){
		arr->a[arr->length] = x;
		arr->length++;
	}
}

void insert(struct Array *arr,int index,int x){
	for(int i = arr->length;i>index;i--){
		arr->a[i] = arr->a[i-1];
	}
	arr->a[index] = x;
	arr->length++;
}

void Delete(struct Array *arr,int index){
	int x = arr->a[index];
	for(int i = arr->length;i>=index;i--){
		arr->a[i-1] = arr->a[i];
	}
}

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr,int key){
	for(int i = 0;i<arr->length;i++){
		if(key == arr->a[i]){
			swap(&arr->a[i],&arr->a[0]);
			return i;
		}
	}
	return -1;
}

int RBinarySearch(struct Array arr,int key,int l,int h){
	int mid;

	if(l<=h){
		mid = (l+h)/2;
		if(key == arr.a[mid]){
			return mid;
		}
		else if(key<arr.a[mid]){
			return RBinarySearch(arr,key,l,mid-1);
		}
		else{
			return RBinarySearch(arr,key,mid+1,h);
		}
	}
	return -1;
}

int BinarySearch(struct Array arr,int key){
	int l = 0;
	int h = arr.length-1;
	int mid;
	while(l<=h){
		mid = (l+h)/2;
		if(key == arr.a[mid]){
			return mid;
		}
		else if(key<arr.a[mid]){
			h = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	return -1;
}

int get(struct Array arr,int i){
	if(i>=0 && i<arr.length){
		return arr.a[i];
	}
	return -1;
}

void set(struct Array *arr,int index,int A){
	if(index>=0 && index<arr->length){
		arr->a[index] = A;
	}
}

int Max(struct Array arr){
	int max = arr.a[0];
	for(int i = 1;i<arr.length;i++){
		if(arr.a[i]>max){
			max = arr.a[i];
		}
	}
	return max;
}

int Min(struct Array arr){
	int min = arr.a[0];
	for(int i = 1;i<arr.length;i++){
		if(arr.a[i]<min){
			min = arr.a[i];
		}
	}
	return min;
}

int Sum(struct Array arr){
	int total;
	for(int i = 0;i<arr.length;i++){
		total = total + arr.a[i];
	}
	return total;
}

float avg(struct Array arr){
    int total;
	for(int i = 0;i<arr.length;i++){
		total = total + arr.a[i];
	}
	return (float)total/arr.length;
}

void Reverse(struct Array *arr){
	int *b;
	int j;
	b = new int[arr->length];
	for(int i = arr->length-1,j = 0;i>=0;i--,j++){
		b[j] = arr->a[i];
	}
	for(int i = 0;i<arr->length;i++){
		arr->a[i] = b[i];
	}
}

void Reverse2(struct Array *arr){
	int i,j;
	for(i = 0,j = arr->length-1;i<j;i++,j--){
		swap(&arr->a[i],&arr->a[j]);
	}
}

void leftShift(struct Array *arr){
	for(int i = 0;i<arr->length;i++){
		arr->a[i] = arr->a[i+1];
	}
	arr->a[arr->length-1] = 0;
}

void RightShift(struct Array *arr){
	for(int i = arr->length;i>=0;i--){
		arr->a[i+1] = arr->a[i];
	}
	arr->a[0] = 0;
}

void InsertSort(struct Array *arr,int x){
	int i = arr->length-1;
	if(arr->length == arr->size){
		return;
	}
	while(i>=0 && arr->a[i]>x){
		arr->a[i+1] = arr->a[i];
		i--;
	}
	arr->a[i+1] = x;
	arr->length++;
}

int SortedList(struct Array arr){
	for(int i = 0;i<arr.length-1;i++){
		if(arr.a[i]>arr.a[i+1]){
			return false;
		}
	}
	return true;
}

void leftNegative(struct Array *arr){
	int i = 0;
	int j = arr->length-1;
	while(i<j){
		while(arr->a[i]<0){
		    i++;
	    }
	    while(arr->a[j]>0){
		    j++;
	    }
	    if(i<j){
		    swap(arr->a[i],arr->a[j]);
	    }
	}
}

struct Array* merge(struct Array *arr1,struct Array *arr2){
    int i = 0;
    int j = 0;
    int k = 0;

    struct Array *arr3 = new struct Array[100];

    while(i<arr1->length && j<arr2->length){
    	if(arr1->a[i]<arr2->a[j]){
    		arr3->a[k] = arr1->a[i];
    		i++;
    		k++;
		}
		else{
			arr3->a[k] = arr2->a[j];
			k++;
			j++;
		}
	}

	for(;i<arr1->length;i++){
		arr3->a[k++] = arr1->a[i];
	}
	for(;j<arr2->length;j++){
		arr3->a[k++] = arr3->a[j];
	}
	arr3->length = arr1->length + arr2->length;
	arr3->size = 10;
	return arr3;

}

struct Array* Union(struct Array *arr1,struct Array *arr2){
    int i = 0;
    int j = 0;
    int k = 0;

    struct Array *arr3 = new struct Array[100];

    while(i<arr1->length && j<arr2->length){
    	if(arr1->a[i]<arr2->a[j]){
    		arr3->a[k] = arr1->a[i];
    		i++;
    		k++;
		}
		else if(arr1->a[i]>arr2->a[j]){
			arr3->a[k] = arr2->a[j];
			k++;
			j++;
		}
		else{
            arr3->a[k] = arr1->a[i];
            k++;
            i++;
            j++;
		}

	}

	for(;i<arr1->length;i++){
		arr3->a[k++] = arr1->a[i];
	}
	for(;j<arr2->length;j++){
		arr3->a[k++] = arr3->a[j];
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;

}

struct Array* Intersection(struct Array *arr1,struct Array *arr2){
    int i = 0;
    int j = 0;
    int k = 0;

    struct Array *arr3 = new struct Array[100];

    while(i<arr1->length && j<arr2->length){
    	if(arr1->a[i]>arr2->a[j]){
    		j++;
		}
		else if(arr1->a[i]<arr2->a[j]){
            i++;
		}
		else{
            arr3->a[k] = arr1->a[i];
            k++;
            i++;
            j++;
		}
	}
	arr3->length = k;
	arr3->size = 10;
	return arr3;

}

struct Array* Difference_of_Arrays(struct Array *arr1,struct Array *arr2){
    int i = 0;
    int j = 0;
    int k = 0;

    struct Array *arr3 = new struct Array[100];

    while(i<arr1->length && j<arr2->length){
    	if(arr2->a[j]<arr1->a[i]){
    		j++;
		}
		else if(arr1->a[i]<arr2->a[j]){
            arr3->a[k] = arr1->a[i];
            k++;
            i++;
		}
		else{
            i++;
            j++;
		}
	}

	for(;i<arr1->length;i++){
        arr3->a[k] = arr1->a[i];
        k++;
	}

	arr3->length = k;
	arr3->size = 10;
	return arr3;

}

int main(){
      struct Array arr1;
      int ch;
      int index;
      int x;
	//insert(&arr,3,12);
	//append(&arr,10);
	//cout<<LinearSearch(&arr,5)<<endl;
	//cout<<"The element is found at index:"<<RBinarySearch(arr,5,0,arr.length-1)<<endl;
	//set(&arr,2,45);
	//cout<<avg(arr);
	//Reverse2(&arr);
    //RightShift(&arr);
	//InsertSort(&arr,8);
	//cout<<SortedList(arr);
	//leftNegative(&arr);
	//arr3 = merge(&arr1,&arr2);
	//arr3 = Difference_of_Arrays(&arr1,&arr2);

      cout<<"Enter the size of the array:"<<endl;
      cin>>arr1.size;
      arr1.a = new int[arr1.size];

      do{
      cout<<"Menu:"<<endl;
      cout<<"1. Insert"<<endl;
      cout<<"2. Delete"<<endl;
      cout<<"3. Search"<<endl;
      cout<<"4. Sum"<<endl;
      cout<<"5. Display"<<endl;
      cout<<"6. Exit"<<endl;

      cout<<"Enter your choice:"<<endl;
      cin>>ch;

      switch(ch){
       case 1:
          cout<<"Enter the index and number:"<<endl;
          cin>>index>>x;
          insert(&arr1,index,x);
          break;

       case 2:
          cout<<"Enter the index you want to delete:"<<endl;
          cin>>index;
          Delete(&arr1,index);
          break;

       case 3:
          cout<<"Enter the key that you want to search:"<<endl;
          cin>>x;
          cout<<"key is found at index:"<<BinarySearch(arr1,x)<<endl;
          break;

       case 4:
          cout<<"Sum of the array is:";
          cout<<Sum(arr1);
          break;

       case 5:
          display(arr1);
          break;
       default:
          cout<<"exit";
      }
      }while(ch<6);
	return 0;
}
