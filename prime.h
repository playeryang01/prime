#include<cmath>

using namespace std;

bool prime(int a){
	bool flag=true;
    for(int i=2;i<=sqrt(a);i++){
	    if(a%i==0){
		    flag=false;
			break;
		}
	}
	return flag;
}
