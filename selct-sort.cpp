#include<iostream>
using namespace std;
int main(){
	int i,j,temp,minIndex;
	int array[7]={345,567,22,12,45,234,3};
    //using selection sort
    for(i=0;i<7;i++){
    	minIndex=i;
    	for(j=i+1;j<7;j++){
    		if(array[j]<array[minIndex]){
    			minIndex=j;
			}
		}
		temp=array[i];
		array[i]=array[minIndex];
		array[minIndex]=temp;
	}
	cout<<"Sorted array:\n";
	for(j=0;j<7;j++){
		cout<<array[j]<<"\n";
	}
	system("pause");
	return 0;
}
