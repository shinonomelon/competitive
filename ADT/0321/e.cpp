#include <stdio.h>
#include <math.h>

int main()
{
  long long n;
  scanf("%lld", &n);
  long long ans = 0;
  for (long long a = 1; a * a * a <= n; a++)
  {
    for (long long b = a; a * b * b <= n; b++)
    {
      ans += n / a / b - b + 1;
    }
  }
  printf("%lld\n", ans);
}