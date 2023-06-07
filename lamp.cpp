#include<iostream>
using namespace std;
/*开关灯*/
#include<cstring>//mmset函数
/*
 *para[in]数组地址
 para[in] 值
 para[in] 大小
 * */
bool a[1005];
int main(){

	int n,k;
	int sum=0;
	memset(a,0,sizeof(a));
	cin>>n>>k;
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++)
		{
			if((j+1)%(i+1)==0)
				a[j]=!a[j];
		}
	}
        for(int j=0;j<n;j++)
        {
           if(a[j]!=0)
	   {
		   cout<<a[j]<<" ";
	  	sum+=1;
	   }
        }
	cout<<endl;
	cout<<n<<"盏灯中总共有"<<sum<<"盏灯亮着"<<endl;
}

