#include<stdio.h>
int main()
{
int n;
printf("Enter value N\n");
scanf("%d",&n);
printonetoN(n);
printf("Enter value N to print pattern one\n");
scanf("%d",&n);
printpatternone(n);
printf("Enter value N to print pattern Diamond\n");
scanf("%d",&n);
printpatterntwo(n,n);
printpatternthree(n-1,n);
printf("Enter value N to print pattern four\n");
scanf("%d",&n);
printpatternfour(n);
return 0;
}

/* Print from 1 to N.
   when N=5
  1
  2
  3
  4
  5      */

int printonetoN(int n)
{
	if(n>0)
	{
	printonetoN(n-1);
        printf("%d\n",n);
	}
}

/* Print from 1 to N.
   when N=5
1
12
123
1234
12345    */

int printpatternone(int n)
{
	if(n>0)
	{
	 int i;
	 printpatternone(n-1);
	 for(i=1;i<=n;i++)
	 printf("%d",i);
	 printf("\n");
	}
}

/* Print from 1 to N.Combine printpatterntwo() & printpatternthree() functions to create below pattern.
   when N=5
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1     */

int printpatterntwo(int n,int rows)
{
 int i,k;
        if(n>0)
	{
	 printpatterntwo(n-1,rows);
         //print spaces to create pattern.
	 for(i=1;i<=rows-n;i++)
	 printf(" ");
         //print numbers in a row in increasing order.
	 for(i=1;i<n;i++)
	 printf("%d",i);
	 //print numbers in a row in decreasing order.
	 for(k=i;k>0;k--)
	 printf("%d",k);
	 printf("\n");
	 }
	 
}


int printpatternthree(int n,int rows)
{
int i,q,r,s;
        if(n>0)
        {
         printpatternthree(n-1,rows);
         //print spaces to create pattern.
         for(q=1;q<=n;q++)
                printf(" ");
         //print numbers in a row in increasing order.
         for(r=1;r<=rows-n;r++)
                printf("%d",r);
         //print numbers in a row in decreasing order.
         for(s=rows-n-1;s>0;s--)
                printf("%d",s);
         printf("\n");
        }
}


/* Print from 1 to N.
   when N=5
1
1212
123123123
1234123412341234
1234512345123451234512345 */

int printpatternfour(int n)
{
 int k,j,m;
 if(n>0)
 {
  printpatternfour(n-1);
  m = n;
  for(k=1;k<=m;k++){
        for(j=1;j<=n;j++)
                printf("%d",j);
        }
        printf("\n");
 }
}
