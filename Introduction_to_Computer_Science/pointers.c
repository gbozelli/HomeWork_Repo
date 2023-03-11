#include <stdio.h>



int main(){
    char* name = "Kenny";
    name++;
    printf("%c\n", *name);
    int a = 1;
    int * p_a = &a;
    a+=1;
    p_a+=1;
    printf("%d\n",a);
    printf("%d\n",*p_a);
    printf("%d\n",p_a);
    return 0;
}