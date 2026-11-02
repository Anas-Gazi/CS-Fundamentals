#include <stdio.h>
main()
{	FILE *f1;
	char c;
	f1= fopen("INPUT.txt", "w"); 	/* open file for writing */
    printf("input into file\n");
	while((c=getchar())!='\n') 	/*get char from keyboard until enter*/
		putc(c,f1); 				/*write a character to INPUT */

	fclose(f1); 	 				/* close INPUT */
	f1=fopen("INPUT.txt", "r"); 		/* reopen file */
    printf("Display from file\n");
	while((c=getc(f1))!=EOF) 	/*read character from file INPUT*/
		printf("%c", c);			/* print character to screen */

	fclose(f1);
} /*end main */
