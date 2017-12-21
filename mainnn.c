#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[20]="100.2932900";
   
   
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val+2);

   strcpy(str, "tutorialspoint.com");
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);
   val=val/2;
   printf("String value = %s, Float value = %f\n", str, val);

  
}
