#include<iostream>
using namespace std;
int minmax(int *arr ,int *min ,int *max){
	int minf=0;
	 int maxs=1;
	for(int i=0;i<=5;i++){
		if(arr[i]<=minf){
			*min=arr[i];
		}
		if(arr[i]>maxs){
			*max=arr[i];
		}
	}
}
int main(){
	int arr[6];
	int min=arr[0];
	int max=arr[0];
	for(int a=0;a<=5;a++){
		arr[a]=a;
	}
	minmax(arr,&min,&max);
	cout<<"min is ="<<min<<endl;
	cout<<"Maximum = "<<max;
}
