#include<stdio.h>
int main()
{
 int n;    //n number of process
 int r;      // number of resources
 int i,j,k,cnt,cntt;
 int flag = 0;
 int avail[10],p[10];
 int need[10][10],alloc[10][10],max[10][10];

 printf("\nEnter number of process :");
 scanf("%d",&n);
 printf("\n Enter number of resources types available : ");
 scanf("%d",&r);
 printf("\nEnter number of resources :\n");
 for(i=0;i<r;i++)
 {  printf("R%d ",i+1);
    scanf("%d",&avail[i]);
 }
  
  printf("\n Enter allocation matrix  \n");
  for(i=0;i<n;i++)
  {
  printf("p%d",i+1);          p[i]=0;
  for(j=0;j<r;j++)
   {
    scanf("%d",&alloc[i][j]);
   }
  }
  
  
  printf("\n Enter MAX matrix  \n");

  for(i=0;i<n;i++)
  {
   printf("p%d",i+1);
   for(j=0;j<r;j++)
   {
    scanf("%d",&max[i][j]);
   }
  } 

  for(i=0;i<n;i++)
  {
   printf("\np%d\t",i+1) ;
   for(j=0;j<r;j++)
   {
    need[i][j]=max[i][j]-alloc[i][j];
    printf("\t%d",need[i][j]);
    }
   }
///////////////////////////////////////////////////////////////   
  
  for(i=0;i<1;i++)
  {
   for(j=0;j<r;j++)
   {
    if((need[i][j] < avail[j])){
    	flag=1;
	}
	else
	   flag=0;
   } 
   if(flag=1){
   	
   }
   
  }
 
 
}
