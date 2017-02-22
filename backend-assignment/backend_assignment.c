#include <stdio.h>
#include <math.h>
#define MOD 1000000007
//power function returning power a raise to b with modulo by 10^9+7
long double power (float a, long long int b) {
    long double ans=1ll;
    while(b) {
        if(b&1)ans=fmod((ans*a),MOD);
        a=fmod((a*a),MOD);
        b=b/2;
    }
    return ans;
}
long long int countStrings( long long int n)
{

	return round((power(1.61803391,n)-power(-0.61803390,n))/2.236067977);      //using golden ratio phi to calculate nth fibonacci number
}
int main()
{
    int t,i;
    long long int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      scanf("%lld",&n);
      printf("%lld\n",countStrings(n+2));         //number of string without having consecutive zeroes of length n
    }
    return 0;
}
