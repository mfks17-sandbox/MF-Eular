#include <iostream>
using namespace std;
int sum = 0;

int main(int argc, const char * argv[])
{
  for (int i = 1; i < 10; ++i)
    {
      if(i % 3 == 0 || i % 5 == 0) {
	sum += i;
	printf("%d \n",i);
      }
    }
  printf( "%d \n", sum);
  return 0;
}
