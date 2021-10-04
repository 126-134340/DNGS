//ÇÁ·Î±×·¡¹Ö p.69 <¿À¹öÇÃ·Î¿ì ¾ð´õÇÃ·Î¿ì> 

#include <stdio.h>
#include <limits.h>
int main()
{
	printf("charÀÇ ÃÖ¼Ú°ª: %6d, charÀÇ ÃÖ´ñ°ª: %6d\n", CHAR_MIN, CHAR_MAX);
	printf("shortÀÇ ÃÖ¼Ú°ª: %6d, shortÀÇ ÃÖ´ñ°ª: %6d\n", SHRT_MIN, SHRT_MAX);
	char cA = 128, cB = -129;
	short sA = 32768, sB = -32769;
	printf("%d %d\n", cA, cB);
	printf("%d %d\n", sA, sB);
	return 0;
}

//[INPUT]
//(¾øÀ½)
//
//
//[OUTPUT]
//charÀÇ ÃÖ¼Ú°ª:   -128, charÀÇ ÃÖ´ñ°ª:    127
//shortÀÇ ÃÖ¼Ú°ª: -32768, shortÀÇ ÃÖ´ñ°ª:  32767
//-128 127
//-32768 32767
