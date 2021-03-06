#include<vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        bool row=false, col=false;
        int n=mat.size(), m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    if(i==0) row=true;
                    if(j==0) col=true;
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][0]==0 || mat[0][j]==0) mat[i][j]=0;
            }
        }
        if(row){
            for(int j=0;j<m;j++){
                mat[0][j]=0;
            }
        }
        if(col){
            for(int i=0;i<n;i++){
                mat[i][0]=0;
            }
        }
    }
};