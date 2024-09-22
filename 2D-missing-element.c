#include<stdio.h>

int main()

{ int x[4][2]={{3,},{31,12},{34,54},{553,}};
  
for(int i=0;i<4;i++)
  
{ for(int j=0;j<2;j++)
{
       
printf("(%d , %d)= %d \n",i,j,x[i][j]);
  
}

}

}