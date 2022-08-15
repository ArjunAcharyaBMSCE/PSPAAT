#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#define pi 3.14159
#define cvrad (pi/180)
#define e 2.718

//****************************************
//equation block
float equation1(float a, float b)
{
    float eq1;
    eq1 = a + b;
    return (eq1);
}

float equation2 (float a, float b)
{
    float eq2;
    eq2 = (b-a)/(b+a);
    return (eq2);
}

float equation3(float a, float b)
{
    float eq3;
    eq3 = log(a + b);
    return (eq3);
}

float equation4(float a, float deg)
{
    float eq4;
    float b = deg*cvrad;
    eq4 = a + sin(b);
    return(eq4);
}

float equation5(float a, double b)
{
    float eq5;
    eq5 = a + fabs(sqrt(b));
    return(eq5);
}

float equation6(float a, double b)
{
    float eq6;
    eq6 = b + pow(e,a);
return(eq6);
}
//*************************************************************************
//calculation block
float calc_sole1(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation1(x0,y0));
   for(i=0;i<8;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation1(x0,y0))+(equation1(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
   printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
float calc_sole2(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation2(x0,y0));
   for(i=0;i<8;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation2(x0,y0))+(equation2(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
   printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
float calc_sole3(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation3(x0,y0));
   for(i=0;i<8;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation3(x0,y0))+(equation3(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
float calc_sole4(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation4(x0,y0));
   for(i=0;i<8;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation4(x0,y0))+(equation4(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
   printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
float calc_sole5(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation5(x0,y0));
   for(i=0;i<8;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation5(x0,y0))+(equation5(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
   printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
float calc_sole6(float x0 ,float y0,float x1,float h)
{
    int i=0, temp;
    float y_value[30];
    y_value[0] = y0 + (h*equation6(x0,y0));
   for(i=0;i<10;i++)
   {
       y_value[i+1]= y0 + ((h/2)*((equation6(x0,y0))+(equation6(x1,y_value[i]))));
       if(y_value[i+1]!=y_value[i])
       {
         printf("y1(%d) = %f\n",i, y_value[i]);
         temp=i;
       }
   }
   printf("y1(%d) = %f\n",temp+1, y_value[i]);
   printf("here y1(%d) = y1(%d)\n", temp, temp+1);
   printf("hence the value of Y1 is %f", y_value[temp]);
}
//************************************************************************
//main function
void main()
{
   int n;
   char rsym=251;
   //print-block
   printf("Pick one of these \n");
   printf("1. dy/dx = x + y\n");
   printf("2. dy/dx = (y-x)/(y+x)\n");
   printf("3. dy/dx = ln(x+y)\n");
   printf("4. dy/dx = x + sin y\n");
   printf("5. dy/dx = x + |%cy|\n", rsym);
   printf("6. dy/dx = y + e^x\n");
   scanf("%d",&n);
   //end-of-print
   system("cls");  //to clear the screen
   typedef float initval;
   initval x0,y0,x1,y_value[50];
   long sol;
   const float h;
   printf("Enter X0\n");
   scanf("%f",&x0);
   printf("Enter Y0\n");
   scanf("%f",&y0);
   printf("Enter X1\n");
   scanf("%f",&x1);
   printf("Enter Step-value(h)\n");
   scanf("%f",&h);
   system("cls");  //to clear the screen
   switch(n)
   {
       case 1: sol = calc_sole1(x0,y0,x1,h);
               break;
       case 2: sol = calc_sole2(x0,y0,x1,h);
               break;
       case 3: sol = calc_sole3(x0,y0,x1,h);
               break;
       case 4: sol = calc_sole4(x0,y0,x1,h);
               break;
       case 5: sol = calc_sole5(x0,y0,x1,h);
               break;
       case 6: sol = calc_sole6(x0,y0,x1,h);
               break;
       default: printf("Wrong Choice");
   }
   getch();
}
