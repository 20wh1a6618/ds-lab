#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node*link;
};
struct node*top = NULL,*cur,*temp;
void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur->data = ele;
    cur->link = NULL;
    if(top == NULL)
      cur->link = NULL;
    else
      cur->link = top;
    top = cur;
}
int pop(){
   temp = top;
   if(top == NULL)
     printf("stack underflow");
   else{
     top = top->link;
     return(temp->data);
     free(temp);
  }
}
int peek(){
   return(top->data);
}
void display(){
    temp = top;
    while(temp != NULL){
         printf("%d",temp->data);
         temp = temp->link;
    }
}
int main(){
   int ch;
   int ele;
      while(1){
         printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
         printf("enter ur choice");
         scanf("%d",&ch);
         switch(ch){
            case 1:
                 printf("enter element");
                 scanf("%d",&ele);
                 push(ele);
                 break;
            case 2:
                 printf("deleted element is %d", pop());
                 break;
            case 3:
                 if(top == NULL)
                   printf("stack underflow");
                 else
                   printf("top most ele is %d",peek());
                 break;
            case 4:
                 if(top == NULL)
                   printf("stack underflow");
                 else
                   display();
                 break;
            case 5:
                 exit(0);
         }
   }
}   
/* output:
1-push
2-pop
3-peek
4-display
5-exit
enter ur choice1
enter element1

1-push
2-pop
3-peek
4-display
5-exit
enter ur choice1
enter element2

1-push
2-pop
3-peek
4-display
5-exit
enter ur choice
1
enter element3

1-push
2-pop
3-peek
4-display
5-exit
enter ur choice4
321
1-push
2-pop
3-peek
4-display
5-exit
enter ur choice1
enter element4

1-push
2-pop
3-peek
4-display
5-exit
enter ur choice2
deleted element is 4
1-push
2-pop
3-peek
4-display
5-exit
enter ur choice3
top most ele is 3
1-push
2-pop
3-peek
4-display
5-exit
enter ur choice4
321
1-push
2-pop
3-peek
4-display
5-exit
enter ur choice5
*/
