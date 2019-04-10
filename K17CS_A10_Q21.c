 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 	float A,B,C,Y,Z,PAGE_FAULT_RATE;
 	printf("   \n                                      Demand Paged Memory\n");
 	printf("\n               Enter the value of Page Fault service time in milisecond(not modified)   :");
 	scanf("%f",&B);
 	printf("\nEnter the value of Page Fault service time in milisecond(modified)  :");
 	scanf("%f",&A);
 	printf("\nEnter the Memory Access time in nanoseconds  :");
 	scanf("%f",&C);
 	printf("\nEnter the Effective Time Access  :");
 	scanf("%f",&Y);
 	printf("\nEnter the Page Replace Modified percentage in nanoseconds :");
 	scanf("%f",&Z);
 	PAGE_FAULT_RATE=(Y-C)/(((Z*A)+(1-Z)*B)+C);
 	printf("\nThe Maximum Acceptable Page Fault Rate is %f  :",PAGE_FAULT_RATE);

 }