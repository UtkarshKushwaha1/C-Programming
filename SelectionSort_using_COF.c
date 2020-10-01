#include<stdio.h>
void swap(int *x,int *y){
int temp = *x;
*x = *y;
*y = temp;

}
void Selection_Sort(int *arr, int *n){
  for(int i = 0 ; i < *n-1 ; i++ ){
    int min_idx = i;
    for(int j = i+1 ; j < *n; j++){
      if(arr[j] < arr[min_idx]){
        min_idx = j;
      }
      swap( &arr[min_idx], &arr[i]);
    }
  }
}

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];

  for(int i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
  }
  Selection_Sort(arr, &n);
  for(int i = 0 ; i < n ; i++){
    printf("%d\n",arr[i] );
  }

}
