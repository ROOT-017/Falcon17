#include<stdio.h>
int n;
int Find(int x);
int* FillArray(int arr[n][n]);
int main(){


    printf("Enter number of elements: \n");
    scanf("%d",&n);
    
    int arr[n][n];
    int* x = FillArray(arr[n][n]);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",x[i][j]);
        }
    }

return 0;
};

int Find(int x){
    int arr[3][3]={{2,14,0},{7,9,12},{8,4,3}};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){ 
            if( x == arr[i][j]){
                printf("True");
            }
            else if(arr[i][j]==arr[2][2]){
                printf("False");
                }
        }
    }
}

int* FillArray(int arr[n][n]){
    int k=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter elements %d: \n",k);
            scanf("%d",&arr[i][j]);
            k++;
        }
    }
    return arr;
}

/* int DisplayArray(int* x){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",x[i][j])
        }
}  */