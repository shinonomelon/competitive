// 桁数を調べる

int calc_digit(int n)
{
  int res = 0;
  while (n > 0)
  {
    res++;
    n /= 10;
  }
  return res;
}