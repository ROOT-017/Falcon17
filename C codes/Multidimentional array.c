#include<stdio.h>
 
int Find(int x){
    int arr[3][3]={{2,14,0},{7,9,12},{8,4,3}};
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){ 
        if( x == arr[i][j]){
            return 1;
        }
        else{
            return 0;
            }
    }

 };
int main(){

    Find(3);

return 0;
}