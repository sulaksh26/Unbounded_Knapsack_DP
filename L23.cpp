/*Unbounded Knapsack


//Recursion


int f(int ind,int W,vector<int>&val,vector<int>&wt){
    if(ind==0){
        return((int)(W/wt[0]))*val[0];
    }


    int notTkae=0+f(ind-1,W,val,wt);
    int take=0;


    if(wt[ind]<=W){
        take=val[ind]+f(ind,W-wt[ind],val,wt);
    }


    return max(take,notTkae);
}

int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt){
    return f(n-1,w,val,wt);
}

*/