#include<stdio.h>
#include<stdlib.h>
void push(int );
int pop();
void display();
int a[5],top=-1;
int main(){
    while(1){
        int choice, element, t;
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
    #include<stdio.h>
2
#include<stdlib.h>
3
void push(int );
4
int pop();
5
void display();
6
int a[5],top=-1;
7
int main(){
8
    while(1){
9
        int choice, element, t;
10
            case 1:
                //int element;
                printf("Enter element: ");
                scanf("%d",&element);
                push(element);
                break;
            case 2: 
                t = pop();
                printf("\n%d is deleted\n",t);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}

void push(int value){
    int n;
    n = sizeof(a);
    //printf("%d\n",n);
    if(top<(n-1)){
        top++;
        a[top] = value;
        //printf("%d\n",top);
    }
    else{
        printf("Stack is full\n");
    }
}

int pop(){
    if(top==-1){
        printf("Underflow\n");
    }
    else{
        //printf("top=%d",top);
        int temp=a[top];
        top--;
        //printf("\ntemp=%d\ttop= %d",temp, top);
        return temp;
    }
}

void display(){
    //printf("top out %d\n",top);
    if(top==-1){
        printf("Underflow\n");
    }
    else{
        int i;
        //printf("top in %d\n",top);
        for(i=top;i>=0;i--){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    
}
    

/*output:

1-push
2-pop
3-peek
4-display
5-exitenter ur choice1
enter element to be inserted1
1-push
2-pop
3-peek
4-display
5-exitenter ur choice2
top  element is 1
1-push
2-pop
3-peek
4-display
5-exitenter ur choice3
stack underflow
1-push
2-pop
3-peek
4-display
5-exitenter ur choice4
stack underflow
1-push
2-pop
3-peek
4-display
5-exitenter ur choice5
*/
                                                                                                                                    1,7           T                                                                           1,7           Top

