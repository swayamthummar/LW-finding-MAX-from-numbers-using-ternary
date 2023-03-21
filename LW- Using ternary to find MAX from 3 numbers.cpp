#include<stdio.h>
main()
{
    int a,b,c;    
     
	printf("Enter the value for A ->");
	scanf("%d",&a);
	printf("Enter the value for B ->");
	scanf("%d",&b);
	printf("Enter the value for C ->");
	scanf("%d",&c);
	
	(a>b)? (a>c)? printf("A is MAX") : printf("C is MAX")
	     : (b>c)? printf("B is MAX") : printf("C is MAX");




}
