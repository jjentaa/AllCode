#include <stdio.h>

int main()
{
 	FILE  *fp;
	fp = fopen("data.txt", "r");
	if (fp != NULL){ 
		printf("I can read this file");
	}
    else{
        printf("I can't read this file");    
    }
    fclose(fp);
    
    return 0;
}