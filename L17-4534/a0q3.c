#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[]) 
{
	char str[100], c, d;;
	int num = 0, x = 0, i;


	if (argc<2)
	return 1;

	char * filename = argv[1];
	 
	FILE * fp = fopen(filename, "r");
	if (fp == NULL)
	return 1;
	 
	FILE * fp1 = fopen ("temp.txt", "w");
	if (fp1 == NULL)
	return 1;
 

	while((c = fgetc(fp)) != EOF) 
	{
		if(c <97 || c>122)
		{
			str[num] = '\0';
			if (x == 1)
			{
				for(i=num-1; i>=0; i--)
				{
					d = str[i];
					fprintf(fp1, "%c", d);
				}
				fprintf(fp1, "%c" , c);
				num = 0;
				x = 0;
			}
			else
			{
				fprintf(fp1,"%s",str);
				fprintf(fp1, "%c" , c);
				num = 0;
			}
		}
		 
		else
		{
			str[num] = c;
			num++;
			if(c == 'a' || c == 'e' || c== 'i' || c == 'o' || c == 'u')
				x = 1;
		}
	}
}
