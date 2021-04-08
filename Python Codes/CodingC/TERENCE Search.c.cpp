#include<stdio.h>

//function declaration ;
int n, i;

//int search(int [],int);
int search(int *arr,int num){



    for (i= 0; i<= n ; i++){
    	
        if(arr[i] == num){
		printf("Element found...");
		
        printf("\nNumber found is %d, at position %d",num,arr[i]);
        }
	
        else{
                printf("Sorry number not in the list:(");
            }
        
	}
    
}

//main program begins here
int main()
{
   
      int num;
      
    printf("Enter number of elements:  ");
    scanf("%d",&n);
    

    printf("Enter %d numbers:  ",n);
    int arr[n];
  
    for(i=0;i<n;i++){ 
    	
        scanf("%d",&arr[i]);
    }
//calling the function search()
printf("What number do you want to search:  ");
scanf("%d",&num);

	search(arr, num);

    
 
return 0;

}
 

