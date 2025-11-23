#include <stdio.h>

void merge(int arr1[], int arr2[], int n, int m) {
    int i, j, temp;

    for (i = n-1, j = 0; i >= 0 && j < m; i--, j++) {

        if (arr1[i] > arr2[j]) {
            temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
        else {
            break;
        }
    }

    // Sort arr1
    for(int x=0;x<n-1;x++){
        for(int y=x+1;y<n;y++){
            if(arr1[x]>arr1[y]){
                temp=arr1[x];
                arr1[x]=arr1[y];
                arr1[y]=temp;
            }
        }
    }

    // Sort arr2
    for(int x=0;x<m-1;x++){
        for(int y=x+1;y<m;y++){
            if(arr2[x]>arr2[y]){
                temp=arr2[x];
                arr2[x]=arr2[y];
                arr2[y]=temp;
            }
        }
    }
}

int main(){
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 5, m = 3;

    merge(arr1, arr2, n, m);

    printf("Merged Arrays:\n");
    for(int i=0;i<n;i++)
        printf("%d ", arr1[i]);
    for(int i=0;i<m;i++)
        printf("%d ", arr2[i]);
}
