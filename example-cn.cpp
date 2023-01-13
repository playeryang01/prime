#include <iostream>
#include "prime.h"

using namespace std;

int main(){
	int n;
	cout<<"请输入一个数，接下来我将判断它是否为质数：";
	cin>>n;
	cout<<endl;
	if(prime(n)){
	    cout<<"这个数是质数。";
	}else{
	    cout<<"这个数不是质数。";
	}
    return 0;
}
