#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int a,n,b,c;
	cin >> a >> n;
	if(n%2==0)
		b = 1;
	else
		b = a;
	for(int i=1;i<=log(n)+1;i++)
	{
		a *= a;
		if(n & (1<<i))
			b *= a;
	}
	cout << b;
	return 0;
}