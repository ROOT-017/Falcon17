#include<stdio.h>

int search(int *arr,int num){
	int j=0,size;
	
	//for(j=0;j<size;j++){
	if(arr[j]==num){
	
		return 1;
		j++;
	}
	else{
		printf("Element not present in the list:");
	}	
	}
	
	


int main(){
	int size;
	
	printf("Enter size of the vector:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter %d element in the vector:",size);
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int num;
	printf("Enter to search");
	scanf("%d",&num);
	
	search(arr, num);
	int ans;
	ans=search(arr, num);
	
	printf("%d",ans);
	
}
