#include<stdio.h>
 int main()
{
 float m1,m2,m3,total,avg;
 char grade;
 printf("Enter marks for three subjects(out of 100):");
 scanf("%f%f%f",&m1,&m2,&m3);
 total=m1+m2+m3;
 avg=total/3;
 printf("\n total marks = %.2f",total);
 printf("\n average marks = %.2f",avg);
 if(avg>=90)
  grade='A';
 else if(avg>=80)
  grade='B';
 else if(avg>=70)
  grade='C';
 else if(avg>=60)
  grade='D';
 else if(avg>=50)
  grade='E';
 else
  grade='F';
 printf("\n grade=%c",grade);
 if(avg>=50||m1>=50||m2>=50||m3>=50)
 printf("\n Result:PASS \n");
 else
 printf("\n Result:FAIL \n");
 return 0;
}
