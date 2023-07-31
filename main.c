
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float C;
    int F;

    printf("enter degree Fahrenheit:\n");
    scanf("%d",&F);
    C=(F-32)*(5/9);

    printf("Celsius  %f \n",C);


    int dist,time;
    float avg;

    printf("enter distance travelled(m):\n");
    scanf("%d",&dist);
    printf("enter time taken(s):\n");
    scanf("%d",&time);

    avg=dist/time;

    printf("average = %f \n",avg);

    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d\n",4,16,64);
    printf("\n\n\n");


  int age;
   printf("HI,HOW OLD ARE YOU?\n");
   scanf("%d",&age);

   printf(" WELCOME %d \n ",age);
   printf("LET'S BE FRIENDS!");


}
