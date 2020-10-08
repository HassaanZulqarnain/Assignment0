#include <stdio.h> 
#include<string.h>


int main(int argc, char *argv[]) 
{ 
	char *filename;
	char c;
	FILE *fp; 

	filename = argv[1]; 
	int count = 0; 

	fp = fopen(filename, "r"); 

	if (fp == NULL) 
	{ 
		printf("Could not open file %s",filename); 
		return 0; 
	} 

	for (c = getc(fp); c != EOF; c = getc(fp))
	{

    	    int b = (int) c;
	    if(b>= 48 && b<= 57)
	    {
	    	count++;
	    }
	} 
	fclose(fp); 

    // Print the count of characters 
	printf("%i",count); 
	printf("\n");

	return 0;
}
