#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char str[101];
    fgets(str, 101, stdin);
    str[strlen(str) - 1] = '\0';

    bool word = false;
    int ans = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        char val = str[i];
        if (val != ' ')
        {
            word = true;
        }
        if (val == ' ')
        {
            if (word)
            {
                ans++;
                word = false;
            }
        }
        
    }
    if (word)
    {
        ans++;
    }

    printf( "%d\n", ans );

    return 0;
}