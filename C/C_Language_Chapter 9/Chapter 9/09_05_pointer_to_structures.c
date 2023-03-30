#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 101;
    printf("%d \n", e1.code); 
    printf("%d \n", ptr->code); 
    printf("the adress of e1 is %d", ptr); 

    return 0;
}