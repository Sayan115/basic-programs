// Problem Statement:- Print all sub-sequences of the array entered.

//Input:- 
// 3
// 1 2 3
//Output:-
// 1 2 3 
// 1 2 
// 1 3 
// 1 
// 2 3 
// 2 
// 3 
// {}


#include <bits/stdc++.h>
using namespace std;

void subSequence(int i,int n,int a[],vector<int> &subSeq)
{
	
	if(i==n)
	{
		for(i=0;i<subSeq.size();i++)
			cout<<subSeq[i]<<" ";

		if(subSeq.size()==0)
			cout<<"{}";
		
		cout<<"\n";
 
		return;
	}


	subSeq.push_back(a[i]);
	subSequence(i+1,n,a,subSeq);

	subSeq.pop_back();
	subSequence(i+1,n,a,subSeq);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i,n,l;
	string s;
	
	cin>>n;
	int a[n+5];
	vector <int> subSeq;

	for(i=0;i<n;i++)
		cin>>a[i];

	subSequence(0,n,a,subSeq);


}
