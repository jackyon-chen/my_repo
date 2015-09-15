#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char ch;
    char str[100] = {0};
    FILE *fp;
    int i=0;

    if((fp=fopen("test.txt","r")) == NULL)
    {
        printf("Can not open file.\n");
        exit(0);
    }
    //打印
    //while((ch=fgetc(fp)) != EOF)
    //    putchar(ch);
    while((ch=fgetc(fp)) != EOF)
    {
		if(ch == ' ')
			ch = '0';
        str[i] = ch;
        i++;
    }
    //printf("str: %s\n",str);
	for(i=0;i<strlen(str);i++)
		printf("str[%d]: %c\n",i,str[i]);
    fclose(fp);

    return 0;
}
