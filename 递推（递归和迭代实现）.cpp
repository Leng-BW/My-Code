//f(0)=0,f(1)=1,f(n)=f(n-1)+f(n-2)
//�ֱ��õݹ�ĵ��ƺ͵����ĵ������f(8) 
//���ƣ���ǰһЩ�������һЩ�� 

//�ݹ� 
#include<iostream>
using namespace std;
int f(int n){//ֻ���f(8)��ֵ��21 
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
//�ݹ����ȫ���� 
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
//	return f(n-1)+f(n-2);                    //��һ����� ��L34���Ƚ� ���һ��ò������մ� 
    return a+b;
}
int main(){
	f(8);
	return 0;
} 
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//���� 
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
