#include <stdio.h>
#include <string.h>
#include <assert.h>

struct TelInfo
{
	char _name[24];
	char _tel[16];
	int _age;
};
char *my_itoa(int n, char* buf)
{
	assert(buf);
	int i = 0;
	while (n)
	{
		buf[i] = n % 10 + '0';
		n /= 10;
		++i;
	}
	
	int begin = 0, end = i - 1;
	while (begin < end)
	{
		char tmp = buf[end];
		buf[end] = buf[begin];
		buf[begin] = tmp;
		++begin;
		--end;
	}
	buf[i] = '\0';
	return buf;
}
int main()
{
	struct TelInfo info;
	strcpy(info._name, "sheena");
	strcpy(info._tel, "153****5645");
	info._age = 20;
	
	////方法一：二进制读写法
	//FILE *fp = fopen("telinfo.c", "wb");
	//fwrite(&info, sizeof(info), 1, fp);
	//fclose(fp);

	//struct TelInfo other;
	//FILE *fp2 = fopen("telinfo.c", "rb");
	//fread(&other, sizeof(other), 1, fp2);
	//fclose(fp2);
	//printf("%s,%s,%d\n", other._name, other._tel, other._age);
	

	//方法二：文本读写法1
	FILE *fpout = fopen("input.c", "w");
	
	fputs(info._name, fpout);
	fputc('\n', fpout);
	
	fputs(info._tel, fpout);
	fputc('\n', fpout);
	
	char age_buf[12];
	my_itoa(info._age, age_buf);
	fputs(age_buf, fpout);
	fputc('\n', fpout);
	
	fclose(fpout);
	struct TelInfo other;
	FILE *fpin = fopen("input.c", "r");
	fscanf(fpin, "%s\n%s\n%d\n", other._name, other._tel, &other._age);
	fclose(fpin);
	printf("%s,%s,%d\n", other._name, other._tel, other._age);


	
	////方法三：文本读写法2
	//FILE *fp = fopen("telinfo.c", "w");
	//fprintf(fp, "%s\n%s\n%d\n", info._name, info._tel, info._age);
	//fclose(fp);
	//
	//struct TelInfo other;
	//FILE *fpin = fopen("telinfo.c", "r");
	//fscanf(fpin, "%s\n%s\n%d\n", other._name, other._tel, &other._age);
	//fclose(fpin);
	//printf("%s,%s,%d\n", other._name, other._tel, other._age);
	
	return 0;
}
