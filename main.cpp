#include <iostream>
#include <cstdio>
#include <memory>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
//#define N 21252

//1-1完美立方
// a 3 = b 3 + c 3 + d 3 的等式被称为完美立方等式。例如
//编写一个程序，对任给的正整数 N(N≤ 100)，寻找所有的四元组 (a, b, c, d)，使得 a 3 = b 3 +
//c 3 + d 3 ，其中 a,b,c,d 大于 1, 小于等于 N ，且 b<=c<=d 。
/*int main() {
	int N;
	cin>>N;
	for (int a = 2; a <= N; ++a)
		for (int b = 2; b < a; ++b)
			for (int c = b; c < a; ++c)
				for (int d = c; d < a; ++d)
					if (a * a * a == b * b * b + c * c * c + d * d * d)
						cout << "Cube =" << a << " Triple =" << b << "," << c << "," << d << endl;
	return 0;
}*/

//1-2生理周期
/*
int main(){
	int p,e,i,d,caseNo=0;
	while (cin>>p>>e>>i>>d&&p!=-1){
		++caseNo;
		int k;
		for (k=d+1;(k-p)%23;k++);
		for(;(k-e)%28;k+=23);
		for(;(k-i)%33;k=23*28);
		cout<<"Case"<<caseNo<<
			":the next triple peak occurs in"<<k-d<<endl;
	}
	return 0;
}*/

//1-3称硬币
/*
char Left[3][7];
char Right[3][7];
char Result[3][7];
//bool IsFake(char c, bool light);

bool IsFake(char c, bool light){
	for (int i = 0; i < 3; ++i) {
		char * pLeft,*pRight;
		if (light){
			pLeft=Left[i];
			pRight=Right[i];
		} else{
			pLeft=Right[i];
			pRight=Left[i];
		}
	}
}
int main(){
	int t;
	cin>>t;
	while (t--){
		for (int i=0;i<3;++i)cin>>Left[i]>>Right[i]>>Result[i];
		for (char c = 'A'; c < 'L';c++) {
			if(IsFake(c, true)){
			cout<<c<<"is the counterfeit coin and it is light.\n";
			break;
		}else if(IsFake(c, false)){
			cout<<c<<"is the counterfeit coin and it is heavy.\n";
			break;
		}
	}
	}
	return 0;
}*/

//1-4熄灯问题
/*
char oriLights[5];
char lights[5];
char result[5];
int GetBit(char c, int i){
	return  (c>>i)&1;
}
void SetBit(char &c, int i, int v){
	if (v){
		c|=(1<<i);
	} else
		c &=~(1<<i);
}
void FlipBit(char &c, int i){
	c^=(1<<i);
}
void OutputResult(int t,char result[]){
	cout<<"PUZZLE #"<<t<<endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			cout<<GetBit(result[i],j);
			if (j<5)
				cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int T;
	cin>>T;
	for (int t = 0; t < T; ++t) {
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 6; j++) {
				int s;
				cin>>s;
				SetBit(oriLights[i],j,s);
		}
		for (int n = 0; n < 64; ++n) {
			int switches=n;
			memcpy(lights,oriLights, sizeof(oriLights));
			for (int i = 0; i < 5; i++) {
				result[i]=switches;
				for (int j = 0; j < 6; j++) {
					if (GetBit(switches,j)){
						if (j>0)
							FlipBit(lights[i],j-1);
						FlipBit(lights[i],j);
						if (j<5)
							FlipBit(lights[i],j+1);
					}
				}
				if (i<5)
					lights[i+1]^=switches;
					switches=lights[i];
			}
			if (lights[4]==0){
				OutputResult(t,result);
				break;
			}
		}
	}
	return 0;
}*/

//2-2汉诺塔问题
/*
void Hanoi(int n,char src,char mid,char dest){
	if(n==1){
		cout<<src<<"->"<<dest<<endl;
		return;
	}
	Hanoi(n-1,src,dest,mid);
	cout<<src<<"->"<<dest<<endl;
	Hanoi(n-1,mid,src,dest);
	return;
}
int main(){
	int n;
	cin>>n;
	Hanoi(n,'A','B','C');
	return 0;
}*/

//3-1-表达式求值
/*
int factor_value();
int term_value();
int expression_value();
int expression_value(){
	int result=term_value();
	bool more= true;
	while (more){
		char op=cin.peek();
		if (op=='+'||op=='-'){
			cin.get();
			int value=term_value();
			if (op=='+')result+=value;
			else result-=value;
		} else more= false;
	}
}
int term_value(){
	int result=factor_value();
	while (true){
		char op=cin.peek();
		if (op=='*'||op=='/'){
			cin.get();
			int value=factor_value();
			if (op=='*')
				result*=value;
			else result/=value;
		} else
			break;
	}
}
int factor_value(){
	int result=0;
	char c=cin.peek();
	if (c=='('){
		cin.get();
		result=expression_value();
		cin.get();
	} else{
		while (isdigit(c)){
			result=10*result+c-'0';
			cin.get();
			c=cin.peek();
		}
	}
	return result;
}
int main(){
	cout<<expression_value()<<endl;
}
*/

//3-2 爬楼梯

/*int N;
int stairs(int n){
	if(n<0)
		return 0;
	if (n==0)
		return 1;
	return stairs(n-1)+stairs(n-2);
}
int main(){
	while (cin>>N) {
		cout << stairs(N) << endl;
	}
	return 0;
}*/

//3-3
/*int main(){
	return 0;
}*/

//3-4
/*
void up_and_down(int);
int main(void)
{
	up_and_down(1);
	return 0;
}
void up_and_down(int n)

{
	
	printf("Level %d: n location %p\n", n, &n); // #1
	
	if (n < 4)
	up_and_down(n + 1);
	printf("LEVEL %d: n location %p\n", n, &n); // #2
}*/

//4-2
