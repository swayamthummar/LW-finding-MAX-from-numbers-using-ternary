#include<stdio.h>
main()
{
    int a,b,c,d,e;     
     
	printf("Enter the value for A ->");
	scanf("%d",&a);
	printf("Enter the value for B ->");
	scanf("%d",&b);
	printf("Enter the value for C ->");
	scanf("%d",&c);
	printf("Enter the value for D ->");
	scanf("%d",&d);
	printf("Enter the value of  E ->");
	scanf("%d",&e);
	
	printf("                                                \n");
	
	(a>b)? (a>c)? (a>d)? (a>e)?  printf("A is MAX") : printf("E is MAX")
         : (c>d)? printf("C is MAX") : printf("D is MAX")                      
		 : (e>d)? printf("E is MAX") : printf("D is MAX")
         : (b>c)? (b>d)? (b>e)? printf("B is MAX") :  printf("E is MAX")      
                : (c>d)?  printf("C is MAX") : printf("D is MAX")         
                : (e>d)?  printf("E is MAX") : printf("D is MAX"); 	

}
