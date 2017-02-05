# 문제

주어진 이진 트리가 대칭인지 검사하는 함수 isSymmetric를 작성하세요.
여기서 대칭이란 좌우가 동일한 값을 가지는 경우를 가리킵니다.
예를 들어

```
    1           1
   / \         / \
  2   2       4   4
 / \ / \     /     \
3  4 4  3   1       1
```

위의 트리는 모두 대칭이지만 아래 트리는 모두 대칭이 아닙니다.

```
    1           1
   / \         / \
  2   2       2   2
   \   \       \
   3    3      1
```

트리 노드 정의와 함수 원형은 아래와 같습니다.

```
 struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };

bool isSymmetric(struct TreeNode* root);
```

# 출제 의도

- 재귀 함수를 만들 수 있는가?
