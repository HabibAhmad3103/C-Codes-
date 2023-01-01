#include <stdio.h>
int openLocks(int total_lockers,int total_students)
{
int remaining=0,n;
int i=1; 
while(i<=total_lockers) 
{
    n=0;
    int j=1;
    while( j<=total_students )
    {	 
    if(i%j==0)
        n++;
        j++;  
    }
    if(n%2==1)
        {
          remaining++;
        }
        ++i;
}  
return remaining;
} 
int mostTouchableLocker(int total_lockers ,int total_students)
{
int n2=0,n;
int i=1;
while(i<=total_lockers)
{
	int val=0;
    for(int j=1;j<=total_students;j++)
    {
        if(i%j==0)
        {
            val++;
        }    
    }
    if (n2<=val)
    {
        n2=val;
        n=i;
    }
    ++i;
} 
return n;
}
void test1(int arr[][3] , int size)
{
   printf("\n\nTask 1 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = openLocks(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
            
         printf( "Test Failed\n") ;
       
         
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
    }
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][3] , int size)
{
    
   printf("\n\nTask 2 Results\n\n") ;
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = mostTouchableLocker(arr[i][0] ,arr[i][1]);
        if(val == arr[i][2])
            passed++;
        else
        {
            failed++;
                
        printf("%s %d","Lockers = ", arr[i][0]);
        printf( "\n");
        printf("%s %d","Students= " , arr[i][1]);
        printf( "\n");
        printf("%s %d","Expected= " , arr[i][2]);
        printf( "\n");
        printf("%s %d","Result =  " , val);
        printf( "\n");
        printf( "\n-------------------------------------");
        printf("\n\n");
        }
        
    }   
    printf("\n\n");
    printf("%s %d", "Total Passed: " , passed);
    printf("%s %d", "\nTotal Failed: " ,failed);
    
     printf("\n\n");
      
     printf( "\n-----------------------------------------------------------------------------------------------------------------\n");
}

int main()
{
    int arr1[10][3] = {{10,10,3},
                      {100,100,10},
                      {100,72,34},
                      {70,100,8},
                      {10000,1000,5228},
                      {0,0,0},
                      {1,0,0},
                      {10000,10000,100},
                      {10000,2000,5187},
                      {17000,2154,8989}};
    int arr2[10][3] = {{10,10,10},
                      {20,10,20},
                      {72,100,72},
                      {100,70,60},
                      {150,40,120},
                      {15,7,12},
                      {1500,450,1260},
                      {100,100,96},
                      {17000,2154,15120},
                      {10000,10000,9240}};
    test1(arr1,10);
    test2(arr2,10);

    return 0;
}
