#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
FILE *fptr;
char tline[100];
fptr = fopen ("sillyfile.txt", "r");
/* check it's open */
while (fgets (tline, 100, fptr) != NULL) {
 printf ("%s", tline); // Print it
}
fclose (fptr);
}