#include "Config.h"
int main()
{
    printf("Hello world!\n");
    Stack s;
    InitStack(&s);
    push(10,&s);
    push(20, &s);
    int e;
    pop(&e, &s);
    pop(&e, &s);
    printf("The value is %d",e);
    return 0;
}
