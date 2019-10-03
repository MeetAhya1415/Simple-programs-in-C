#include<iostream>
#include<time.h>
using namespace std;

int fact(int n)
{
   /* int ans = n;
    for(int i=n-1; i>=1; i--)
        ans = ans *i;
    return ans;*/
    if(n==1)
	return n;
    else
	return(n*fact(n-1));
}

int main()
{
    clock_t s,e;
    int f,n;

    cout<<"enter number : ";cin>>n;

    cout<<"\nthe number is "<<n<<"\n";

    s=clock();

    f = fact(n);

    e=clock();

    cout<<"factorial = "<<f;

    float ans=((float)(e-s))/CLOCKS_PER_SEC;
    cout<<"\ntime analysis: "<<ans;

    return 0;
}
