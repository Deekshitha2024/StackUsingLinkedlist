#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *top =0;
struct node *newnode;


void push(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter element to be push");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop(){
    if(top==0){
        printf("Stack is empty");
    }
    else{
        struct node *temp;
        temp=top;
        top=top->next;
        printf("popped element is %d",temp->data);
        free(temp);
        
    }
}
void peek(){
    if(top==0)
    {
        printf("stack is empty");
    }
    else{
        printf("the top most element is %d",top->data);
    }
}
void display(){
    if(top==0){
        printf("stack is empty");
    }
    else{
        struct node *temp;
        temp=top;
        printf("stack elements are");
        while(temp!=0){
            printf("%d ",temp->data);
            temp=temp->next;
            
            
        }
    }
}
void main()
{
    int ch;
    while(1){
        printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter valid choice");
                break;
        }
    }
    
}
