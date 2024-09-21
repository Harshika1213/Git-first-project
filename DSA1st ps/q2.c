#include<stdio.h>
int main(){
    int size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=-99999;
    int min = arr[0];
    int second_min= 99999;
    for(int i = 1;i<size;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        else if (arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
        if(arr[i]<min){
            second_min=arr[i];
        }
        else if(arr[i]<second_min && arr[i]!=min){
            second_min = arr[i];
        }
    }
    printf("second largest :%d\n",second_max);
    printf("second smallest :%d\n",second_min);
   
    return 0;
}