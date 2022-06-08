#include<stdio.h>
#include<float.h> 
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void rev(char str[], int len){
    
    for(int i =0; i<len/2; i++){
        swap(&str[i], &str[len-1-i]);
    }
}

int main(){

    char a[101];
    char b[101];
    char strSum[101];
    scanf("%s %s", &a, &b);

    rev(a, strlen(a));
    rev(b, strlen(b));

    int i = 0, j = 0, k = 0, hand = 0;

    while (i<strlen(a) && j<strlen(b))
    {
        int sum = (a[i] - '0') + (b[j] - '0') + hand;
        strSum[k] = (sum % 10 + '0');
        hand = sum / 10;
        i++;
        j++;
        k++;
    }

    while (i<strlen(a))
    {
        int sum = (a[i] - '0') + hand;
        strSum[k] = (sum % 10 + '0');
        hand = sum / 10;
        i++;
        k++;
    }

    while (j<strlen(b))
    {
        int sum = (b[j] - '0') + hand;
        strSum[k] = (sum % 10 + '0');
        hand = sum / 10;
        j++;
        k++;
    }
    
    if (hand>0)
    {
        strSum[k] = hand + '0';
    }

    rev(strSum, strlen(strSum));

    printf("%s\n", strSum);

    return 0;
}

/*
different method

#include<stdio.h>
#include<string.h>
#include<math.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void rev(char str[], int len){
    
    for(int i =0; i<len/2; i++){
        swap(&str[i], &str[len-1-i]);
    }
}

int stringToNumber(char str[]){
    int len = strlen(str);
    rev(str, len);
    int number = 0;
    for(int i=0;i<len;i++){
        number= number + ((str[i]-'0')*pow(10, i));
        //printf("%d\n", number);
    };
    return number;
};
int main(){
    char ar1[4] = "322";
    char ar2[4] = "722";
    
    int number = stringToNumber(ar1);
    int number2 = stringToNumber(ar2);
    printf("%d", number+number2);
}

*/