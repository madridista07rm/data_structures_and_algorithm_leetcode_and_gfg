#include<iostream>
using namespace std;
int main(){
	int a[5][3];
	int sum=0;

	for(int row=0;row<3;row++){
       for(int col=0;col<3;col++)
       {
       	a[row][col]=sum;
       	cout<<a[row][col]<<" ";
       	sum++;
       }
       cout<<endl;
	}
	cout<<endl;
	for(int col=0;col<3;col++){
		if(col%2==0){
			for(int row=0;row<3;row++){
				cout<<a[row][col]<<" ";
			}
		}
		else{
			for(int row=2;row>=0;row--){
				cout<<a[row][col]<<" ";
			}
		}
	}
	return 0;
}