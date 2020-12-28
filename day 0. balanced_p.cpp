#include<iostream>
#include<stack>
using namespace std;

bool isvalid(char arr[]){
	int i=sizeof(arr);
	stack<char>s;
	for (int i = 0; arr[i]!='\0'; i++)
	{
		char ch=arr[i];
		if(ch=='('){
			s.push(ch);
		}
		else if(ch==')'){
			if(s.empty() or s.top()!='('){
				return false;
			}
             s.pop();
		}
		
	}
	if(!s.empty()){
		cout<<"not valid"<<endl;
		return false;
	}
	else{
		cout<<"valid"<<endl;
		return true;
	}
}
int main(){
	char arr[10];
	cin>>arr;
	isvalid(arr);
	return 0;
}
