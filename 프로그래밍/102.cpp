//프로그래밍 p.102 <피라미드 그리기> 

#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 10 - i; j++)
		{
			putchar(' ');
		}
		for (k = 0; k <= 2*i; k++)
		{
			putchar('@');
		}
		puts(" ");
	}
	return 0;
}


//[INPUT]
//(없음)
//
//
//[OUTPUT]
//           @
//          @@@
//         @@@@@
//        @@@@@@@
//       @@@@@@@@@
//      @@@@@@@@@@@
//     @@@@@@@@@@@@@
//    @@@@@@@@@@@@@@@
//   @@@@@@@@@@@@@@@@@
//  @@@@@@@@@@@@@@@@@@@
