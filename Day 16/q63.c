#include <stdio.h>

int main() {
    int n, i, j, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    int found = 0;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: %d + %d = %d\n",
                       arr[i], arr[j], target);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No pair found.\n");
    }

    return 0;
}