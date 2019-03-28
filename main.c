#include "Config.h"
int main()
{
    printf("Hello world!\n");
    /** \Stack
     *
    Stack s;
    InitStack(&s);
    push(10,&s);
    push(20, &s);
    int e;
    pop(&e, &s);
    pop(&e, &s);
    printf("The value is %d",e);
     *
     */

/*      Queue q;
 *      InitQueue(&q);
 *      append(10,&q);
 *      append(20,&q);
 *      append(30,&q);
 *      int e1,e2,e3;
 *      serve(&e1,&q);
 *      serve(&e2,&q);
 *      serve(&e3,&q);
 *     printf("The values are\n%d\n%d\n%d\n",e1,e2,e3);
 */

    List l;
    InitList(&l);
    InsertList(0,10,&l);
    InsertList(1,20,&l);
    int e1,e2;
    retrieve(0,&e1,&l);
    retrieve(1,&e2,&l);
    clearList(&l);
    printf("The values are\n%d\n%d\n",e1,e2);
    return 0;
}
