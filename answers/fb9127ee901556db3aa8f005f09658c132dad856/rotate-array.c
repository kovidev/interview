#include <assert.h>
#include <util.h>

static void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Returns value between [0, n)
// If you want more details, visit https://en.wikipedia.org/wiki/Modulo_operation
static int modulo(int k, int n)
{
    assert(n > 0);
    if (k < 0)
        return k % n + n;
    return k % n;
}

// Rotate array using the juggling algorithm
static void juggling(int* nums, int numsSize, int k)
{
    assert(numsSize > 0);
    assert(k > 0);
    assert(k < numsSize);

    int prev = 0;
    int next = k;
    for (int i = 0; i < numsSize; i++)
    {
        swap(nums + prev, nums + next);

        if (next == prev) // New phase
        {
            prev = prev + 1;
            next = (prev + k) % numsSize;
        }
        else
        {
            next = (next + k) % numsSize;
        }
    }
}

void rotate(int* nums, int numsSize, int k)
{
    if (numsSize <= 0) // Empty
        return;

    k = modulo(k, numsSize);
    if (k == 0) // Stable
        return;

    juggling(nums, numsSize, k);
}