#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void insert(int *a, int n, int pos, int val){

    for (int i = n-2; i >=pos; i--)
    {
        a[i+1]=a[i];
    }
    a[pos] = val;
    
}

int main(){

    int arr[7]={5,10,2,3,14,20};

    int pos, val;

    scanf( "%d %d", &pos, &val );

    insert(arr, 7, pos, val);

    for (int  i = 0; i < 7; i++)
    {
        printf( "%d ", arr[i] );
    }
    

    return 0;
}