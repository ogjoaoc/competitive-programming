# dp WA

'''
dp ans look after learning dp :D

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
ll dp[100005],v2[100005];
int main()
{
	int n,mx = 0;
	cin >> n;
	int v[n];
	for(int i = 0; i < n; i++){
		cin >> v[i];
		v2[v[i]]++;
		mx = max(mx, v[i]);
	} 
	dp[1] = v2[1];
	for(int i = 2; i <= mx; i++){
		dp[i] = max((dp[i-2]+(v2[i]*i)),dp[i-1]);
	}
	cout<<dp[mx];
 
	return 0;
}


'''
n = int(input())
v = [int(x) for x in input().split(" ")]
m = {}
rep = False
pont = 0

for i in v:
    if i in m:
        m[i] += 1
        rep = True
    else:
        m[i] = 1
    
if (rep):
    while(sum(v) != 0):
        maximo = max(m, key=m.get)
        for i in range(len(v)):
            if v[i] == maximo:
                v[i] = 0
                pont += maximo
                break;
        
        for i in range(len(v)):
            if v[i] == maximo-1 or v[i] == maximo+1:
                v[i] = 0;
        
        pont += v.count(maximo)*maximo
        
        for i in range(len(v)):
            if v[i] == maximo:
                v[i] = 0

else:
    while(sum(v) != 0):
        maximo = max(v)
        
        for i in range(len(v)):
            if v[i] == maximo:
                v[i] = 0
                pont += maximo
                break;
    
        for i in range(len(v)):
            if v[i] == maximo-1 or v[i] == maximo+1:
                v[i] = 0;
    

print(pont)