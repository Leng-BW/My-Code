//f(0)=0,f(1)=1,f(n)=f(n-1)+f(n-2)
//分别用递归的递推和迭代的递推求出f(8) 
//递推：用前一些量求出后一些量 

//递归 
#include<iostream>
using namespace std;
int f(int n){//只输出f(8)的值是21 
	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}
	return f(n-1)+f(n-2);
}
int main(){
	cout<<f(8);
	return 0;
} 
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//递归输出全过程 
#include<iostream>
using namespace std;
int f(int n){
	if(n==1){
		cout<<"1: "<< 1<<endl;
		return 1;
		
	}
	if(n==0){
		cout<<"0: "<<0<<endl;
		return 0;
	}
	int a=f(n-1),b=f(n-2);
	cout<<n<<": "<<a+b<<endl;
//	return f(n-1)+f(n-2);                    //不一样结果 和L34来比较 而且还得不到最终答案 
    return a+b;
}
int main(){
	f(8);
	return 0;
} 
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//迭代 
#include<iostream>
using namespace std;
int main(){
	int a[8]={0};
	a[0]=0;a[1]=1;
	cout<<a[0]<<" "<<a[1]<<" ";
	for(int n=2;n<=8;n++){
		a[n]=a[n-1]+a[n-2];
		cout<<a[n]<<" ";
	}
	return 0;
}
