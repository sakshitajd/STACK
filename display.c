#include<stdio.h>
int stack[20],top=-1;
void push(int val){
    if(top==20)
    {
       printf("Stack is Full");
    }else
    {
        ++top;
        stack[top]= val;
    }
}
int pop(){
    int val=0;
    if(top==-1)
    {
       printf("Stack is empty");
    }else
    {
        val = stack[top];
        top = top-1;
    }
    return val;
}
void display(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}
int  main()
{
    int op,val;
    while(1)
    {
    printf(" \n operations \n 1- push\n 2-pop\n 3-display stack\n 4-exit\nEnter the opration : ");
    scanf("%d",&op);
        switch(op){

            case 1: printf("\nEnter the element topush on stack:  ");
                    scanf("%d",&val);
                    push(val);
                    break;
            case 2: 
                    val = pop();
                    printf("\nPopped elemnt is %d ",val);
                    break;
            case 3: printf("\nDiaplay Stack\n");
                    display();
                    break;
            case 4: printf("\nExit from stack");
                    break;
        
    return 0;
    }
}
}