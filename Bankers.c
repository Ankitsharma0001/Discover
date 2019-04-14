#include<stdio.h>
int main()
{
 int n;    // number of process
 int r;      // number of resources
 int i,j;

 int need[10][10];

    n = 5;  
    r = 4; 
    int alloc[5][4] = { { 0, 0, 1, 2 },{ 1, 0, 0, 0 },{ 1,3,5,4 },{ 0,6,3,2 },{ 0, 0, 1,4 } };  
    
    int max[5][4] = { { 0,0,1,2 },{ 1,7,5,0 },{ 2,3,5,6 },{ 0,6,5,2 },{ 0,6,5,6 } };
    
    int avail[4] = { 1,5,2,0 };


printf("\t\t Need Matrix\n");
  for(i=0;i<n;i++)
  {
   printf("\np%d\t",i+1) ;
   for(j=0;j<r;j++)
   {
    need[i][j]=max[i][j]-alloc[i][j];
    printf("\t%d",need[i][j]);
    }
   }
  
  
  int f1=0,f2=0,f3=0,f4=0,f5=0;
  for(i=0;i<n;i++){
  	 
	 switch(i){
     
	   case 0:
         if((need[i][0]<=avail[0]) && (need[i][1]<=avail[1]) && (need[i][2]<=avail[2]) && (need[i][3]<=avail[3])){
	    	 f1=1;
	    	 avail[0] = avail[0] + alloc[i][0];
	    	 avail[1] = avail[1] + alloc[i][1];
	    	 avail[2] = avail[2] + alloc[i][2];
	    	 avail[3] = avail[3] + alloc[i][3];
		 }
	     else{
	 	   
	     }
		 	     
	     break;
	     
	    case 1:
	    	if((need[i][0]<=avail[0]) && (need[i][1]<=avail[1]) && (need[i][2]<=avail[2])&& (need[i][3]<=avail[3])){
	    	  f2=1;
	    	  avail[0] = avail[0] + alloc[i][0];
	    	  avail[1] = avail[1] + alloc[i][1];
	    	  avail[2] = avail[2] + alloc[i][2];
	    	  avail[3] = avail[3] + alloc[i][3];  
	        }
	        
	        break;
	        
	    case 2:
		   if((need[i][0]<=avail[0]) && (need[i][1]<=avail[1]) && (need[i][2]<=avail[2])&& (need[i][3]<=avail[3])){
	    	  f3=1;
	    	  avail[0] = avail[0] + alloc[i][0];
	    	  avail[1] = avail[1] + alloc[i][1];
	    	  avail[2] = avail[2] + alloc[i][2];
	    	  avail[3] = avail[3] + alloc[i][3];  
	        }
	        
	        break;
			
		case 3:
		   if((need[i][0]<=avail[0]) && (need[i][1]<=avail[1]) && (need[i][2]<=avail[2])&& (need[i][3]<=avail[3])){
	    	  f4=1;
	    	  avail[0] = avail[0] + alloc[i][0];
	    	  avail[1] = avail[1] + alloc[i][1];
	    	  avail[2] = avail[2] + alloc[i][2];
	    	  avail[3] = avail[3] + alloc[i][3];
	         }
	        
	        break;
			
		case 4:
		    if((need[i][0]<=avail[0]) && (need[i][1]<=avail[1]) && (need[i][2]<=avail[2])&& (need[i][3]<=avail[3])){
	    	  f5=1;
	    	  avail[0] = avail[0] + alloc[i][0];
	    	  avail[1] = avail[1] + alloc[i][1];
	    	  avail[2] = avail[2] + alloc[i][2];
	    	  avail[3] = avail[3] + alloc[i][3]; 
	        }
	        
	        break;		    
	    	
	    default :
		     printf("\ndefault");	
      }
      
   }
  
  if((f1 ==1) && (f2 ==1) && (f3 ==1) && (f4 ==1) && (f5 ==1) ){
  	printf("\n\n All Executed");
  }
  else{
  	 if( f1 != 1){
  	 	     f1=1;
	         for(i=0;i<1;i++){
                for(j=0;j<r;j++){
                	avail[j] = avail[j] + alloc[i][j];
               }
             }
	   }
	  else if(f2 != 1){
	  	    f2=1;
	         for(i=1;i<2;i++){
                for(j=0;j<r;j++){
                	avail[j] = avail[j] + alloc[i][j];
               }
             }
	    }
	  else if(f3 != 1){
	  	     f3=1;
	         for(i=2;i<3;i++){
                for(j=0;j<r;j++){
                	avail[j] = avail[j] + alloc[i][j];
               }
             }
	    }
	  else if(f4 !=1){
	  	      f4=1;
	          for(i=3;i<4;i++){
                for(j=0;j<r;j++){
                	avail[j] = avail[j] + alloc[i][j];
               }
             }
         }
       else{
       	     f5=1;
	         for(i=4;i<5;i++){
                for(j=0;j<r;j++){
                	avail[j] = avail[j] + alloc[i][j];
               }
             }
	     }      
	  		   	 
  }

   printf("\n\n\n     Final   Avaliable :-- ");
   
              for(j=0;j<r;j++){
			     printf("\t: %d ",avail[j]);
               }
            
     if((f1 ==1) && (f2 ==1) && (f3 ==1) && (f4 ==1) && (f5 ==1) ){
  	      printf("\n\n \t\t Safe State  ");
      } 
	  else
	  {
	  	printf("\n\n \t\t Not Safe State");
			 }       
}
