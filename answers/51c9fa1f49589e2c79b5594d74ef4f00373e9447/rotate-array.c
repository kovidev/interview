void rotate(int* nums, int len, int k)//nums -> int 형배열, len-> 배열의 길이, k-> 반복횟수
{
  if (k == 0)//반복횟수가 없을때 return
    return;
  if (k > 0)//양수일때
  {
    for (int num = 1; num <= k; ++num)
    {
      int itemp = 0;
      itemp = *(nums + (len - 1));//마지막원소 저장
      for (int i = len - 1; i > 0; i--)
      {
        *(nums + i) = *(nums + (i - 1));//우측원소 swap
      }
      *(nums + 0) = itemp;//마지막원소를 처음원소에 대입
    }
  }
  else//음수일때
  {
    for (int num = 1; num <= abs(k); ++num)
    {
      int itemp = 0;
      itemp = *(nums + 0);//처음원소 저장
      for (int i = 0; i < len - 1; i++)
      {
        *(nums + i) = *(nums + (i + 1));//좌측원소 swap
      }
      *(nums + (len - 1)) = itemp; //처음원소를 마지막원소에 대입
    }
  }
}
