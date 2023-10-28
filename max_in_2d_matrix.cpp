#include <iostream>
using namespace std;

int main(){
    int n, m, r;
    cin >> n >> m >> r;
    
    int matrix[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            scanf("%d", &matrix[i][j]);
        }
    }

    while(r--){
        int r1, r2, c1, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        if(r1 > r2 or c1 > c2){
            cout << "INVALID\n";
        }else if(r1 > n or c1 > m or r2 < 1 or c2 < 1){
            cout << "OUTSIDE\n";
        }else{
            r1 = max(1, r1)-1;
            r2 = min(n, r2)-1;
            c1 = max(1, c1)-1;
            c2 = min(m, c2)-1;
            int mx = matrix[r1][c1];
            for(int i=r1;i<=r2;++i){
                for(int j=c1;j<=c2;++j){
                    mx = max(mx, matrix[i][j]);
                }
            }
            cout << mx << "\n";
        }
    }
    return 0;
}