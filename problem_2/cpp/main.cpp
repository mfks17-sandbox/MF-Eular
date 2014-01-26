#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
  int before_one = 1;
  int before_two = 2;
  int current;
  int n[] = {before_one, before_two};
  int sum = 0;

  printf( "%d\n", n[0] );
  printf( "%d\n", n[1] );
  sum = n[1];
  for (int i =  0; i < 400000; i ++) {
    n[i + 2] = n[i] + n[i + 1];

    if ( n[i + 2] % 2 == 0) {
    printf( "i = %d\n", i);
    printf( "%d\n", n[i + 2]);
      sum += n[i + 2];
      printf( "sum :::%d\n", sum);
    }
  }
  if (n[i + 2] > 4000000)
    {
      return 0;
    }
  return 0;
}
