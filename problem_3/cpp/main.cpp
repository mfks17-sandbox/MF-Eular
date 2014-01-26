#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[])
{
  for (long long int i = 1LL; i < 600851475143LL; i++)
    {
      float result;
      result = 600851475143 % i;
	if (result == 0)
	  {
	    printf("i = %lld\n",i);
	    std::ofstream ofs( "test.txt", std::ios::app);
	    ofs << "i = " << i << std::endl;
	    
	    for (long long int j = 1LL; j < i; j++)
	      {
		float result2;
		result2 = i % j;
		if (result2 == 0)
		  {
		    printf("j = %lld\n",j);
		    std::ofstream ofs( "test.txt", std::ios::app);
		    ofs << "j = " << j << std::endl;
		  }
	      }
	  }
    }
  return 0;
}

