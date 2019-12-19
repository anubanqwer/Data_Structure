#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); 
    int N,M;
    long long a,b;
    cin >> N >> M;
    map<long long,long long> m1;
    for(int i =0; i < N; i++){
        cin >> a >> b;
        m1[b] = a;
    }
    vector<pair<long long,long long> > v1;
    for(int i = 0; i< M; i++){
        cin >> a >> b;
        pair<long long,long long> p1;
        p1.first = a;
        p1.second = b;
        v1.push_back(p1);
    }
    for(int i = 0 ;i<M; i++){
        a = v1[i].first;
        b = v1[i].second;
        if( a != b && m1[m1[a]] != 0 && m1[m1[a]] == m1[m1[b]]  ) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }
}