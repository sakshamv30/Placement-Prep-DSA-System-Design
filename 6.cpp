#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        ll ans = 0;
	ll z = max(r, c);
	ll z2 = (z - 1) * (z - 1);
	if (z % 2 == 0)
	{
		if (z == c)
		{
			ans = z2 + r;
		}
		else
		{
			ans = z2 + 2 * z - c;
		}
	}
	else {
		if (r == z)
		{
			ans = z2 + c;
		}
		else
		{
			ans = z2 + 2 * z - r;
		}
 
	}
 
 
	cout << ans << endl;
    }
    return 0;
}