#include<stdio.h>

int binary_search(int arr[], int low,int high , int element){
    
    int mid = 0;
    if ( low <= high){
        mid = (low + high ) / 2;
        if (arr[mid] == element){
            return mid;

        }
        else if ( arr[mid] < element) {
            return binary_search(arr, mid + 1, high, element);
        }
        else if(arr[mid] > element){
            return binary_search(arr, low, mid - 1, element);
        }

    }
    return - 1;

    }


int main(){
    int size, key;
    
    printf("Enter number of elements : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements in sorted order : ");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);

    }
    printf("Element to be searched : ");
    scanf("%d", &key);
    int low = 0;
    int high = size - 1;
    int pos = binary_search(arr, low, high,  key);
    if (pos == -1){
        printf("Element is not found\n");
        }

    else{
        printf("Element is found at %d\n", pos + 1 );

    }

    }
//input
Enter number of elements : 5
Enter elements in sorted order : 1 2 3 4 5
Element to be searched : 3
//output
Element is found at 3    






