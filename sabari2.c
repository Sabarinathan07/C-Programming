#include <stdio.h>
#include <math.h>
 
int Check_Armstrong (int n);
int Perfect_n(int n); 
int Prime_n(int n); 
 
int main()
{
	int n;
 
  	printf("\nPlease Enter n to Check whether it is an Armstrong, Prime, or Perfect :  ");
  	scanf("%d", &n);
  	
 	if (Check_Armstrong(n))
    	printf("\n Armstrong");
  	else
    	printf("\nnot an Armstrong ");
 
 	if(Prime_n(n) )
   		printf("\nPrime number ");
   	else
   		printf("\nNot a Prime number ");
	if (Perfect_n(n) ) 
    	printf("\n Perfect number") ;   
 	else   
    	printf("\n not a Perfect number") ;   
 
  return 0;
}

int Check_Armstrong (int n)
{
	int Temp, Reminder, Times = 0, Sum = 0;
	Temp = n;
	
	while (Temp != 0) 
	{
		Times = Times + 1;
     	Temp = Temp / 10;
 	}
  
  	for(Temp = n; Temp > 0; Temp =  Temp /10 )
   	{
    	Reminder = Temp % 10;
    	Sum = Sum + pow(Reminder, Times);
   	}
  	if ( n == Sum )
  		return 1;
  	else
	 	return 0; 	
}

int Perfect_n(int n)   
{
	int i, Sum = 0 ;   
 
 	for(i = 1 ; i < n ; i++)   
  	{
  		if(n % i == 0)
		    Sum = Sum + i ;   
  	}    
 
 	if (Sum == n) 
    	return 1;   
 	else   
    	return 0;   
}

int Prime_n(int n)
{
	int i, Count = 0;
	
	for (i = 2; i <= n/2; i++)
   	{
    	if(n%i == 0)
     	{
       		Count++;
     	} 
    }
   	if(Count == 0 && n != 1 )
   		return 1;
   	else
   		return 0;
}