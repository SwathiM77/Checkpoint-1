/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci() 
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
     if(n>0)
      {
	 int arr[100];
	 arr[0]=0;
	 arr[1]=1;
	 for(int i=2;i<=n;i++){
	   arr[i]=arr[i-1]+arr[i-2];
	 }
	 return arr[n-1];
        }
       else	return -1;
}

int nthPrime(int num)
{
      if(num>0)
      {
	int ar[100],k=1;
	ar[0]=2;
	for(int i=3;k<=num;i++)
	{
		for(int j=2;j<i;j++)
		{
		   if(i%j==0)
		   {
		      break;
		   }
		   ar[k]=i;
		   k++;
		}
	}
	return ar[num-1];
        }
        else return -1;
}