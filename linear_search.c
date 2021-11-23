#include<stdio.h>

int linear_search(int arr[], int size, int element){
    int pos;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i + 1;
            
            }

    }
    return -1;

}


int main(){
    int size;
    printf("Enter size : ");
    scanf("%d", &size);
    int arr[size];
    int element, pos;
    printf("Enter %d elements : ", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Element to be searched : ");
    scanf("%d", &element);
    pos = linear_search(arr, size, element);
    if (pos == -1){
        printf("Element is not found\n");
    }
    else{
        printf("Element found at %d.\n", pos);
    }


}
//input
Enter size : 2
Enter 2 elements : 5 6
Element to be searched : 3    
//output
Element is not found
