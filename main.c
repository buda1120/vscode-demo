#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int main()
{
   int n, i, j;
   char color[N][16];
   char result[N][16];
   int count[N];
   int max = 0;

   //string sort[1000];
   for(i = 0;i < N;i++)
     count[i] = 1;

   while(scanf("%d",&n) != EOF)
   {
       for(i = 0; i < n;i++)
        scanf("%s",color[i]);
       for(i = 0; i < n;i++)
       {
           for(j = i + 1;j < n;j++)
          if(! strcmp(color[i],color[j]))
            {
              count[i]++;
              count[j] = 0;
            }
           printf("%d is %d.\n",i,count[i]);
       }

        for(i = 1;i < n;i++)
        {
            if(count[i] > count[max])
                max = i;
        }
        printf("%s\n",color[max]);

        for(j = 0;j < n;j++)
            strcpy(result[j],color[max]);
   }

     for(j = 0; j < n;j++)
        printf("%s",result[j]);

    return 0;
}
