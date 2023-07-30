#include <cstdio>
#include <vector>
#include <unordered_map>
#include <map>
#include <iostream>
#include <set>
const int MAXN = 11;
const int MAXM = 1001;
 
int N, M, u, v, cnt;
int g[MAXM][MAXN];
std::unordered_map<int, int> mp;
std::map<int, int> exist;
using namespace std;
int main(){
    scanf("%d %d", &u, &v);
    scanf("%d %d", &N, &M);
    set<int> list;
    list.insert(u);
    list.insert(v);
    for(int i = 1; i <= N; ++i){
        exist[i] = 1;
    }
    cnt = N;
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j <= M; ++j){
            scanf("%d", &g[j][i]);
        }
    }
    for(int i = 1; i <= M; ++i){
        for(int j = 1; j <= N; ++j){
            if(exist[j]){
                if(list.count(g[i][j])){
                    exist[j] = 0;
                    --cnt;
                    printf("Round #%d: %d is out.\n", i, j);
                    continue;
                }
                auto it = list.begin();
                for ( it ; it != list.end(); it++)
                {
                    if(list.count(*it + g[i][j]) || list.count(*it - g[i][j])){
                        break;
                    }
                }
                if(it == list.end()){
                    exist[j] = 0;
                    --cnt;
                    printf("Round #%d: %d is out.\n", i, j);
                } else{
                    list.insert(g[i][j]);
                }
            }
        }
    }
    if(!cnt){
        printf("No winner.");
    } else{
        printf("Winner(s):");
        for(auto it = exist.begin(); it != exist.end(); ++it){
            if(it->second){
                printf(" %d", it->first);
            }
        }
    }
    return 0;
}