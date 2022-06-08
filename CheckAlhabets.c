#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

// this program is eligible for lowercase letters.
int main(){

    char a[100];
    scanf( "%s", &a );

    int counter[26] = {0}; // using counter array

    for (int i = 0; i < strlen(a); i++)
    {
        char value = a[i];
        counter[value - 'a'] = 1;
    }

    for (char value = 'a'; value <= 'z'; value++)
    {
        if (counter[value-'a'] == 0)
        {
            printf( "No\n");
            return 0;
        }
    }
    printf( "Yes\n" );
    

    return 0;
}