#include <bits/stdc++.h>
using namespace std;
bool isSafe(int node, int color[], bool graph[101][101],int n,int col){
    for (int k = 0;k<n;k++){
        if (k!=node && graph [k][node] == 1 && color[k] == col){
            return false;
        }
    }
    return true;
}
bool solve(int node, int color[],int m,int n, bool graph[101][101]){
    if (node == N){
        return true;
    }
    for (int i=1;i<=m;i++){
        if (isSafe(node,color,graph,N,i)){
            color[node] = i;
            if (solve(node+1,color,m,N,graph)) return true;
            color[node] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int N){
    int color[N] = {0};
    if (solve(0,color,m,N,graph)) return true;
    return false;
}
int main(){
    int N=4;
    int m=3;
    bool graph[101][101];
    memset(graph,false,sizeof graph);
    // edges are (0,1),(1,2),(2,3),(3,0)
}