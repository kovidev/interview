#include <stdio.h>

void rotate(int* nums, int numsSize, int k);

int main()
{
    int nums[1024] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    int numsSize = 7;

    int k = 100;

    rotate(nums, numsSize, k);


    printf("k == %d: [", k);
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);
        if (numsSize - 1 != i)
            printf(", ", nums[i]);
    }
    printf("]\n");
    return 0;
}

void rotate(int* nums, int numsSize, int k)
{
    while (k < 0)
        k += numsSize;
    while (k > numsSize)
        k -= numsSize;

    int idx_src = 0;
    int idx_dst = k, i = 0;;
    int num_next_dst, num_cur_dst = nums[idx_src];

    idx_src += k;
    for (i = 0; i < numsSize ; i++)
    {
        num_next_dst = nums[idx_dst];
        nums[idx_dst] = num_cur_dst;
        num_cur_dst = num_next_dst;

        idx_dst += k;
        if (idx_dst >= numsSize)
            idx_dst -= numsSize;

        if (idx_dst == idx_src)
        {
            idx_src += 1;
            if (idx_src >= numsSize)
                idx_src -= numsSize;

            idx_dst += 1 + k;
            if (idx_dst >= numsSize)
                idx_dst -= numsSize;

            num_cur_dst = nums[idx_src];

            idx_src += k;
            if (idx_src >= numsSize)
                idx_src -= numsSize;
        }
    }
}
