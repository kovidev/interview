# 문제

길이가 1 이상인 문자열 s와 유효한 단어 목록 dict이 주어졌을 때, s에 공백을 삽입해서 만들 수 있는 모든 유효한 문장을 반환하는 함수 wordBreak를 작성하세요.
여기서 유효한 문장이란 dict 존재하는 단어로만 이루어진 문장을 말합니다.

예를 들어
s = "helloworld"
dict = {"hello", "world", "hi"}
이면 wordBreak(s, dict) == ["hello world"] 입니다.

s = "catsanddog"
dict = {"cat", "cats", "dog", "dogs", "and", "sand"}
이면 wordBreakable(s, dict) == ["cat sand dog", "cats and dog"] 입니다.

s = "hellowonderworld"
dict = {"hello", "world", "hi"}
이면 wordBreak(s, dict) == [] 입니다.

함수원형은 아래와 같습니다.

C++: `vector<string> wordBreak(const string& s, const set<string>& dict)`
C#: `bool wordBreakable(string s, HashSet<string> dict)`
Python: `def wordBreakable(s, dict)`