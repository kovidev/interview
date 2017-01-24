# 기술 면접

이 저장소는 기술면접 문제와 지원자의 풀이를 저장하는 곳입니다.

# 주의사항

절대 지원자의 신상 정보가 드러나지 않도록 해야 합니다.
이름 대신 이력서 URL의 SHA1 해시값을 사용하세요.
지원자의 답변은 answers/{URL SHA1 해시값} 안에 넣어야 합니다.

# 디렉터리 구조

```
├── answers
│   ├── 11ac1245c964f4ef7a568ea073688cc7e04a7efa
│   │   ├── JUDGE.md
│   │   └── rotate-array.c
│   └── 9e9e049dcfd4574358e61e2bb3c38dd72e8b24b5
│       ├── JUDGE.md
│       └── rotate-array.c
└── questions
    └── rotate-array.md
```

지원자의 답변과 이에 대한 평가는 같은 디렉터리에 보관합니다.
답변과 문제의 이름은 같게 맞추며 답변에 대한 평가는 JUDGE.md에 기록합니다.
