// Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file.

#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;

	if(argc != 2)
	{
		printf("Usage:./a.out file_name\n");
		return;
	}

	fp = fopen(argv[1],"r+");

	if(fp == 0)
	{
		printf("File is not present\n");
		return;
	}

	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			if(ch>='a' && ch<='z')
			{
				ch = ch-32;
				fseek(fp,-1,1);
				fputc(ch,fp);
			}
			else if(ch>='A' && ch<='Z')
			{
				ch = ch+32;
				fseek(fp,-1,1);
				fputc(ch,fp);
			}
		}
	}

}
