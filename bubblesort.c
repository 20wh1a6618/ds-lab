#include<stdio.h>
void bubbleSort(int a[],int n) {
    int i,j,temp;
    for(i = 0; i < n;i++){
            for(j = 0; j < n - i - 1;j++){
                    if(a[j] > a[j+1]){
                            temp = a[j];
                            a[j] = a[j+1];
                            a[j+i] = temp;
                    }
            }
    }
}
int main() {
    int n,i;
    printf("enter the size\n");
    scanf("%d", &n);
    int a[n];
    printf("enter the array elements\n");
    for(i = 0; i < n;i++){
            scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
    printf("after sort\n");
    for(i = 0; i < n; i++){
            printf("%d",a[i]);
    }
}
output:
enter the size
2
enter the array elements
3
4
after sort
34
