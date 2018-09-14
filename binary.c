#include<stdio.h>

void reverse(x){
    int cur;
    /* get current bit */
    if((x & 1) == 1)
        cur = 1;
    else
        cur = 0;
    int next = x >> 1;
    if (next != 0)
        reverse(next);
    printf("%d", cur);
}   

int main(void){
    int x;
    scanf("%d", &x);
    reverse(x);
    return 0;
}
