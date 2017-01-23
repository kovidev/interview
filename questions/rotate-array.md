# 문제

주어진 배열을 오른쪽으로 k 칸 이동하는 코드를 작성하세요.

예를 들어 주어진 배열이 [1, 2, 3, 4, 5, 6, 7] 이면 k 값에 따라 아래와 같은 결과가 나와야 합니다.

```
k == 3: [5, 6, 7, 1, 2, 3, 4]
k == 5: [3, 4, 5, 6, 7, 1, 2]
k == 7: [1, 2, 3, 4, 5, 6, 7]
k == -2: [3, 4, 5, 6, 7, 1, 2]
```

시간 복잡도가 O(N)이고 공간 복잡도가 O(1)이면 가산점이 있습니다.

함수 원형은 아래와 같아야 합니다.

- C/C++: `void rotate(int* nums, int numsSize, int k)`
- Java/C#: `void rotate(int[] nums, int k)`
- JavaScript: `function rotate(nums, k)`
- Python: `def rotate(nums, k)`


# 출제 의도

- 공간 복잡도와 시간 복잡도의 개념을 이해하고 있는가?
- 다양한 범위의 값으로 테스트를 수행하는가?
- 단순하고 오류 가능성이 적은 알고리즘을 도출하는가?

# 해결책

- Juggling algorithm
- Reverse algorithm