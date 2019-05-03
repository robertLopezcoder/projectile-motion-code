#include<stdio.h>  
#include<math.h> 
int main() 
{ 
float u,g=9.8,theta,T,R,h,H,rtheta; 

printf("Enter the velocity:"); 
scanf("%f",&u); 
printf("Enter angle of prijection\n:"); 
scanf("%f",&theta); 
rtheta=3.1415*theta/180; 
H=u*u/(2*g); 
T=2*u*sin(rtheta)/g; 
R=u*u*sin(2*rtheta); 
h=H*pow(sin(rtheta),2); 
printf("The maximum height is:%f\n",H); 
printf("The time of flight is:%f\n",T); 
printf("The horizontal range is:%f\n",R); 
printf("The maximum vertical height for angle %f is:%f\n",theta,h); 
} 
