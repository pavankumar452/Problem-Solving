#include<bits/stdc++.h>
using namespace std;
int main(){
	int grade[5],sum=0;
	for(int i=1;i<=5;i++){
		cout<<"Enter grade "<<i<<": ";
		cin>>grade[i];
		sum+=grade[i];
	}
	float avg=sum/5.0;
	cout<<"The average grade is: "<<avg;
}