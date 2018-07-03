#include <stdio.h>
char char_average(char array[], int count)
{
  int i;
char average;
  average = 0;
for(i = 0; i < count; i++)
    average += array[i];
  average /= count;
return average;
}

int int_average(
int array[],
int count
)
{ int i, average;
  average = 0;
for(i = 0; i < count; i++)
    average += array[i];
  average /= count;
return average;
}
void main(void) {
char chars[]    = { 1, 2, 3 , 4, 5 };
int integers[] = { 1, 2, 3 , 4, 5 };
printf("chars[]    - average = %d\n",
char_average(chars, sizeof(chars)));
printf("integers[] - average = %d\n",
int_average(integers, sizeof(integers)));
}
