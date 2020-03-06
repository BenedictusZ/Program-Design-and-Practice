#include <iostream>
#include <cstdio>
#include <memory>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
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
/*char Left[3][7];
char Right[3][7];
char Result[3][7];
bool IsFake(char c, bool light);

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
}
bool IsFake(char c,bool light){
	for ( int i = 0; i < 3; ++i ) {
		char * pLeft,*pRight;
		if(light){
			pLeft=Left[i];
			pRight=Right[i];
		} else{
			pLeft=Right[i];
			pRight=Left[i];
		}
		switch (result[i][0]) {

		}{

		}
	}
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

//4-2 二分查找原理
/*int LowerBound(const int a[],int size,int p){
	int L=0;
	int R=size-1;
	int lastPos=-1;
	while (L<=R){
		int mid=L+(R-L)/2;
		if(a[mid]>=p)
			R=mid-1;
		else{
			lastPos=mid;
			L=mid+1;
		}
	}
	return lastPos;
}
int main(){
	int arr[]={1,6,3,54,8,0,2,7,2};
	int p=LowerBound(arr,1,6);
	cout<<p<<endl;
}*/


//4-3 二分法求方程的根
/*
double EPS=1e-6;
double f(double x){return x*x*x-5*x*x+10*x-80;}
int main(){
	double root,x1=0,x2=100,y;
	root=x1+(x2-x1)/2;
	int triedTimes=1;
	y=f(root);
	while (fabs(y)>EPS){
		if (y>0) x2=root;
		else     x1=root;
		root=x1+(x2-x1)/2;
		y=f(root);
		triedTimes++;
	}
	printf("%.8f\n",root);
	printf("%d",triedTimes);
	return 0;
}*/

//4-4

//5-2 快速排序
/*void swap(int & a,int & b){
	int temp=a;
	a=b;
	b=temp;
}
void QuickSort(int a[],int s,int e){
	if (s>=e)
		return;
	int k=a[s];
	int i=s,j=e;
	while (i!=j){
		while (j>i&&a[j]>=k)
			--j;
		swap(a[i],a[j]);
		while (i<j&&a[i]<=k)
			++i;
		swap(a[i],a[j]);
	}
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
int main(){
	int a[]={93,27,30,2,8,12,2,8,30,89};
	int size=sizeof(a)/sizeof(int);
	QuickSort(a,0,size-1);
	for ( int i = 0; i < size; i++ ) {
		cout<<a[i]<<",";
	cout<<endl;
	return 0;
	}
}*/

//5-3 输出前m大的数

//5-4 求排列的逆序数

//6-1 数字三角形
/*
#define MAX 101
int D[MAX][MAX];
int n;
int maxSum[MAX][MAX];
int MaxSum(int i,int j){
	if(maxSum[i][j]!=-1)
		return maxSum[i][j];
	if(i==n)
		maxSum[i][j]=D[i][j];
	else{
		int x=MaxSum(i+1,j);
		int y=MaxSum(i+1,j+1);
		maxSum[i][j]=max(x,y)+D[i][j];
	}
	return maxSum[i][j];
}
int main(){
	int i,j;
	cin>>n;
	for ( int k = 0; k <= n ; k++ ) {
		cin >> D[i][j];
		maxSum[i][j]=-1;
	}
	cout<<MaxSum(1,1)<<endl;
}*/

//6-2 数字三角形2
/*#define MAX 101
int D[MAX][MAX];
int n;int * maxSum;
int main(){
	int i,j;
	cin>>n;
	for ( int i = 0; i <= n; i++ ) {
		for ( int j = 0; j <= i; j++ ) {
			cin>>D[i][j];
		}
		maxSum=D[n];
		for ( int i = n-1; i >= 1; --i ) {
			for ( int j = 0; j <= i; ++j ) {
				maxSum[j]=max(maxSum[j],maxSum[j+1])+D[i][j];
			cout<<maxSum[1]<<endl;
			}
		}
	}
}*/

//6 最长上升子序列
/*
const int MAXN=1010;
int a[MAXN];int maxLen[MAXN];
int main(){
	int N;cin>>N;
	for ( int i = 1; i < N; ++i ) {
		cin>>a[i];
		maxLen[i]=1;
	}
	for ( int i = 2; i <=N ; ++i ) {
		for ( int j = 1; j < i; ++j ) {
			if (a[i]>a[j])
				maxLen[i]=max(maxLen[i],maxLen[j]+1);
		}
		cout<<* max_element(maxLen+1,maxLen+N+1);
		return 0;
	}
}
*/

//7-3 神奇的口袋
/*int a[30];int N;
int Ways(int w, int k){//从前k种物品中选择一些，凑成体积w的做法数目
	if (w==0) return 1;
	if (k<=0) return 0;
	return Ways(w,k-1)+Ways(w-a[k],k-1);
}
int main(){
	cin>>N;
	for ( int i = 1; i <= N; ++i )
		cin>>a[i];
	cout<<Ways(40,N);
	return 0;

}*/

//2 八皇后
int N;
int queenPos[100];

void NQueen(int k);

int main() {
	cin >> N;
	NQueen(0);//从第0行开始摆放皇后
	return 0;
}

void NQueen(int k) {
	int i;
	if ( k == N ) {
		for ( i = 0; i < N; i++ )
			cout << queenPos[i] + 1 << " ";
		cout << endl;
		return;
	}
	for ( int i = 0; i < N; i++ ) {
		int j;
		for ( j = 0; j < k; j++ ) {
			if ( queenPos[j] == i || abs(queenPos[j] - i) == abs(k - j)) {
				break;
			}
		}
		if ( j == k ) {
			queenPos[k] = i;
			NQueen(k + 1);
		}
	}
}