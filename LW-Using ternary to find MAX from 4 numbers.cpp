#include<stdio.h>
main()
{
    int a,b,c,d;     
     
	printf("Enter the value for A ->");
	scanf("%d",&a);
	printf("Enter the value for B ->");
	scanf("%d",&b);
	printf("Enter the value for C ->");
	scanf("%d",&c);
	printf("Enter the value for D ->");
	scanf("%d",&d);
	
	
	(a>b)? (a>c)? (a>d)?  printf("A is MAX")  :   printf("B is MAX") 
                                              : (c>d)?  printf("C is MAX") : printf("D is MAX") 
					                     :(b>c)? (b>d)? printf("B is MAX") : printf("D is MAX")
					                     :(c>d)?  printf("C is MAX") : printf("D is MAX");           
					    
         



}
