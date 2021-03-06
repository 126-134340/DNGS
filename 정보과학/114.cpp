//정보과학 p.114 <bmp 이미지 프로세싱>
 
//1024*768, 24bit, bmp file only
#include <stdio.h>
#define W 1024
#define H 768
#define head 54

FILE *fp1, *fp2; //파일 처리용 구조체 변수 
unsigned char R[H][W], G[H][W], B[H][W]; //색상 데이터 저장용

void bmp_open(char s[20], char t[20])
{
	fp1=fopen(s, "rb"); //바이너리 읽기 모드로 파일 열기
	fp2=fopen(t, "wb"); //바이너리 쓰기 모드로 파일 열기 
}

void bmp_close()
{
	fclose(fp1);
	fclose(fp2);
}

void head_copy()
{
	unsigned char t;
	for(int i=0; i<head; i++)
	{
		t=getc(fp1); //getc(): 1byte를 입력받는 함수
		putc(t, fp2); //putc(): 1byte를 출력하는 함수 
	}
}

void bmp_read()
{
	for(int i=0; i<H; i++)
	{
		for(int j=0; j<W; j++)
		{
			B[i][j]=getc(fp1);
			G[i][j]=getc(fp1);
			R[i][j]=getc(fp1);
		}
	}
}

void bmp_write()
{
	for(int i=0; i<H; i++)
	{
		for(int j=0; j<W; j++)
		{
			putc(B[i][j], fp2);
			putc(G[i][j], fp2);
			putc(R[i][j], fp2);
		}
	}
}
void filter(float r, float g, float b)
{
	for(int i=0; i<H; i++)
	{
		for(int j=0; j<W; j++)
		{
			B[i][j]=(int)(B[i][j]*b/100);
			G[i][j]=(int)(G[i][j]*g/100);
			R[i][j]=(int)(R[i][j]*r/100);
		}
	}
	
	for(int i=0; i<H; i++)
	{
		for(int j=0; j<W; j++)
		{
			putc(B[i][j], fp2);
			putc(G[i][j], fp2);
			putc(R[i][j], fp2);
		}
	}
}

int main()
{
	bmp_open("rgb.bmp", "filter.bmp");
	head_copy();
	bmp_read();
	
	filter(50, 50, 50); //r, g, b percentage
	bmp_write();
	bmp_close();
}


//[INPUT]
//(엔터키 입력)
//
//
//[OUTPUT]
//(실행된 사진 저장)
