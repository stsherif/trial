#include <iostream>
#include <vector>

using namespace std;
int main(){
vector <int> v;
auto t=2.4;
while(v.size()<16){
	t=time(NULL)+v.size();
	srand(t);
	v.push_back(rand() % 48 + 1);
	auto n = v.size()-1;
	for(int i=0;i<n;i++){
	if (v[n]==v[i]){v.pop_back();}
	}
}
for (int x:v)
{cout<<x<<" ";}
return 0;
}
