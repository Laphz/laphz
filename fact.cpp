#include<iostream>
int fact(int num){
//	int ans = 1;
//	for(;a>1;a--){
//		ans*=a;
//	}
//	return ans;
	if (num==0){
		return 1;
	}
	return num * fact(num-1);
}

int main(){
	int a, ans ;
	std::cout<<"Enter a num: ";
	std::cin>>a;
	ans = fact(a);
	std::cout<<"Result: "<<ans<<"\n";
	return 0;
}
