 #include <stdio.h>

int removeDuplicates(int nums[], int numsSize) {

    int k = 1;

    for (int i = 1; i < numsSize; i++) {

        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main() {

    int nums[100];
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Number of unique elements = %d\n", k);

    printf("Array after removing duplicates: ");

    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}