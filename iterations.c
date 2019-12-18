#include<stdio.h>
int main()
{
 int n;
 printf("Input N to print 1 to N\n");
 scanf("%d",&n);
 printonetoN(n);
 printf("Input number of rows N to print patternone\n");
 scanf("%d",&n);
 patternone(n);
 printf("Input number of rows N to print patterntwo\n");
 scanf("%d",&n);
 patterntwo(n);
 printf("Input number of rows N to print patternthree\n");
 scanf("%d",&n);
 patternthree(n);
 printf("Input number of rows N to print patternfour\n");
 scanf("%d",&n); 
 patternfour(n);
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
 int i;
 for(i=1;i<=n;i++)
	printf("%d\n",i);
}


//Function to print pattern one

/* Print from 1 to N.
   when N=5
1
12
123
1234
12345    */

int patternone(int n)
{
 int i,j;
 for(i=1;i<=n;i++)
 {
	for(j=1;j<=i;j++)
		printf("%d",j);
	printf("\n");
 }  
}

//Function to print pattern two

/* Print from 1 to N.
   when N=5
    1
   121
  12321
 1234321
123454321   */

int patterntwo(int n)
{
 int i,j,k,m=n,l;
 for(i=1;i<=n;i++)
 {
	for(j=1;j<m;j++)
		printf(" ");
	m--;
        for(k=1;k<=i;k++)
		printf("%d",k);
        for(l=i-1;l>0;l--)
                printf("%d",l);

        printf("\n");
 }
}
//Function to print pattern three
/* Print from 1 to N. Combine printpatterntwo() & printpatternthree() functions to create below pattern.
   when N=5
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1	*/

int patternthree(int n)
{
 int i,j,k,m=n,l,t=1,p,q,r;
 for(i=1;i<=n;i++)
 {
	//create spaces
        for(j=1;j<m;j++)
                printf(" ");
        m--;
	//print pattern
        for(k=1;k<=i;k++)
                printf("%d",k);
        for(l=i-1;l>0;l--)
                printf("%d",l);

        printf("\n");
 }
 for(p=n-1;p>=1;p--)
 {
	for(q=1;q<=t;q++)
		printf(" ");
	t++;
        for(int r=1;r<=p;r++)
		printf("%d",r);
        for(int s=p-1;s>0;s--)
		printf("%d",s);
	printf("\n");
}
	
}

//Function to print pattern four
/* Print from 1 to N.
   when N=5
1
1212
123123123
1234123412341234
1234512345123451234512345 */

int patternfour(int n)
{
 int i,j,k;
 for(i=1;i<=n;i++)
 {
	for(k=1;k<=i;k++){
	for(j=1;j<=i;j++)
		printf("%d",j);
        }
	printf("\n");
 }
}
