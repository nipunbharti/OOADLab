#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	for(int i=2; ;i++){
		if((8*i*i) <= (64*i*log(i))/log(2)){
			cout<<i<<" ";
		}
		else{
			cout<<endl;
			break;
		}
	}
	return 0;
}