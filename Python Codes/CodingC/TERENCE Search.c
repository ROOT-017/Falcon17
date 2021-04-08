
#include<stdio.h>
//function declaration ;

int search(int num, int *arr){
	int n, i,count=0;

    for (i= 0; i< n ; i++){
    	
        if(arr[i]==num){
        	
        	return 1;
        	
        /*    printf("Number found is %d in the position %d",num,arr[i]);
    	count++;
	        if(count==num-1){
				
				printf("Element Not Found");
				}*/
		}
		else{
			return 0;
		}
            
    
    }
}
//main function begins here
int main()
{
   
      int num,n,i;
      
    printf("Enter number of elements: ");
    scanf("%d",&n);
     int arr[n];
  

    printf("Enter %d numbers: ",n);
   
    for(i=0;i<n;i++){ 
    	
        scanf("%d",&arr[i]);
    }
//calling the function search()
printf("What number do you want to search:  ");
scanf("%d",&num);

search(num, arr);
int ans;
ans=search(num, arr);
printf("%d",ans);
    
 return 0;
}

