# 문제

길이가 1 이상인 문자열 s와 유효한 단어 목록 dict이 주어졌을 때, s에 공백을 삽입해서 dict에 존재하는 단어로만 이루어진 문장으로 만들 수 있는지를 판별하는 함수 wordBreakable 을 작성하세요.

예를 들면

```
s = "helloworld"
dict = {"hello", "world", "hi"}
wordBreakable(s, dict) == true
```

```
s = "catsanddog"
dict = {"cat", "cats", "dog", "dogs", "and", "sand"}
wordBreakable(s, dict) == true
```

```
s = "hellowonderworld"
dict = {"hello", "world", "hi"}
wordBreakable(s, dict) == false
```

함수원형은 아래와 같아야 합니다.

- C++: `bool wordBreakable(const string& s, const set<string>& dict)`
- C#: `bool wordBreakable(string s, HashSet<string> dict)`
- Python: `def wordBreakable(s, dict)`