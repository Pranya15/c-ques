#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first array:\n");
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second array:\n");
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // INTERSECTION
    printf("\nIntersection: ");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;  
            }
        }
    }
    // UNION
    
    printf("\nUnion: ");

    // print all from first array
    for(int i = 0; i < n1; i++)
        printf("%d ", a[i]);

    // print only those from second array which are not in first
    for(int i = 0; i < n2; i++) {
        int found = 0;
        for(int j = 0; j < n1; j++) {
            if(b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", b[i]);
    }

    return 0;
}
