#include <stdio.h>
#include <stdbool.h>
int main(){
	bool IsMS;
	int row,cols;
	int dn,sum,sum1,sum2,sum3,sum4,sum5;
	
	printf ("Enter the dimension of the square matrix:\n");
	scanf ("%d",&dn);
	
	int matrix[dn][dn];
	
	for (row=0;row<dn;row++){
		for (cols=0;cols<dn;cols++){
			printf ("Enter the element for index %d%d: \n",row,cols);
			scanf ("%d",&matrix[row][cols]);
		}
		printf ("\n");
	}
	printf ("\n\n");
	printf ("The original matrix is :\n");
	for (row=0;row<dn;row++){
		for (cols=0;cols<dn;cols++){
			printf ("%d ",matrix[row][cols]);
		}
		printf ("\n");
	}
	
	sum=0;
	for (row=0;row<dn;row++){
		for(cols=0;cols<dn;cols++){
			if (row==cols)
			sum=sum+matrix[row][cols];
		}
	}
	for (row=0;row<dn;row++){
		sum1=0;
		for(cols=0;cols<dn;cols++){
			sum1 = sum1 +matrix[row][cols];
		}
	}
		for (row=0;row<dn;row++){
		sum2=0;
		for(cols=0;cols<dn;cols++){
			sum2 = sum2 +matrix[cols][row];
		}
	}
	sum3=0;
	for (row=0;cols<dn;row++){
		for (cols=0;row<dn;cols++){
			if (row+cols==dn-1)
			sum3=sum3 + matrix [cols][row];
		}
	}
   if (sum1==sum2)
   {
   	 if (sum2==sum)
		{
   	 	if (sum==sum3)
			{
   	 		IsMS=1;
			}
		}
   }
   if (IsMS==1)
  printf ("This is matrix is a magic matrix\n");
  else 
  printf("\nIt is not a magic matrix");
}
