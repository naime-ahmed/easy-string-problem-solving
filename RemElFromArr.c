#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void array_delete(int *a, int n, int pos)
{
    for (int i = pos+1; i < n; i++)
    {
        a[i-1] = a[i];
    }
    
}

int main(){

    int arr[6] = {5,10,2,3,14,20};
    int pos;
    scanf( "%d", &pos );
    array_delete(arr, 6, pos);

    for (int i = 0; i < 5; i++)
    {
        printf( "%d ", arr[i] );
    }
    

    return 0;
}