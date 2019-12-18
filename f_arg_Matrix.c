#include<stdio.h>
int main(int argc, char *argv[])
{
 int i,j,m,n;
 int a[10][10];

 /* Reading inputs from input file given as command line argument*/

 FILE * fp; 
 printf("%s",argv[1]);

 /* open the input file for reading*/

 fp = fopen(argv[1], "r");
 fscanf(fp, "%d", &m);
 fscanf(fp, "%d", &n);
 
 for(i=0;i<m && !feof(fp);i++)
 {
  for(j=0;j<n && !feof(fp);j++)
   {
     fscanf(fp,"%d",&a[i][j]);
   }
 }
 /* close the file */

 fclose(fp);

 /* Print matrix provided in input file*/
 
 printf("The given %d * %d  input matrix values:\n",m,n);
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
   { 
    printf("%d",a[i][j]);
   }
    printf("\n");

 }
 /* function to print matrix traversal to ouput file */
 matrixtraversal(m,n,a,argv[2]);
}

int matrixtraversal(int m,int n,int a[10][10],char argv[])
{
  int i,j,k,l,p,top,bottom,left,right,s=0,q=0;
  int b[40];
  FILE * fp; 
  
  /* initialize variable for first outer layer traversal of matrix */
  top=0;
  bottom=m-1;
  left=0;
  right=n-1;
  /* outer layer to subsequent layers of matrix traversal in ring form */
  for(q=1;q<=m/2 && q<=n/2;q++)
  {
  for(j=left;j<=right;j++)
	b[s++]=a[top][j];
  for(k=top+1;k<=bottom;k++)
	b[s++]=a[k][right];
  for(l=right-1;l>=left;l--)
	b[s++]=a[bottom][l];
  for(p=bottom-1;p>=top+1;p--)
	b[s++]=a[p][left];
  
  top++;
  left++;
  right--;
  bottom--;
}

  //for 3*3 matrix case 
  if(top==bottom && left==right)
  {
      b[s++]=a[top][left];
  }
 
  /* open the output file for writing*/

   fp = fopen(argv,"w");
 
   for(i = 0; i < m*n;i++){
       fprintf(fp, "%d\n",b[i]);
   }
 
   /* close the file*/  
   fclose (fp);
}
