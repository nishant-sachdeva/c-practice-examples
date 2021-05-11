#include<bits/stdc++.h>

using namespace std;

bool is_equal(float a, float b){
	if ( abs(a-b) < 1e-9 )
	{
		return true ;
	}
	else
		return false;

}



int main()
{
	float a, b;

	bool c = is_equal(a, b);

	return 0;
}
