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
    int d;
    printf("enter the element whuc you want to rotate:\n");
    scanf("%d",&d);
    for(int i=0;i<d;i++){
        int temp = arr[0];
        for{int j =0;j<size-1;j++}{
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    printf("Array after rotation is:\n");
    for(int i = 0; i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}