#include<bits/stdc++.h>
#define ll long long
using namespace std;


class SegmentTrees{
    public:
    SegmentTrees(int n){
        this->n = n;
        this->tree = vector<ll>(4*n, 0);
        this->lazy = vector<ll>(4*n, 0);
    }
    void update(int node, int start, int end, int l, int r, ll val){
        if(lazy[node] != 0){
            tree[node] += lazy[node];
            if(start != end){
                lazy[2*node] += lazy[node];
                lazy[2*node+1] += lazy[node];
            }
            lazy[node] = 0;
        }
        if(start > end || start > r || end < l){
            return;
        }
        if(start >= l && end <= r){
            tree[node] += val;
            if(start != end){
                lazy[2*node] += val;
                lazy[2*node+1] += val;
            }
            return;
        }
        int mid = (start + end) / 2;
        update(2*node, start, mid, l, r, val);
        update(2*node+1, mid+1, end, l, r, val);
        tree[node] = max(tree[2*node], tree[2*node+1]);
    }
    ll query(int node, int start, int end, int l, int r){
        if(start > end || start > r || end < l){
            return 0;
        }
        if(lazy[node] != 0){
            tree[node] += lazy[node];
            if(start != end){
                lazy[2*node] += lazy[node];
                lazy[2*node+1] += lazy[node];
            }
            lazy[node] = 0;
        }
        if(start >= l && end <= r){
            return tree[node];
        }
        int mid = (start + end) / 2;
        ll p1 = query(2*node, start, mid, l, r);
        ll p2 = query(2*node+1, mid+1, end, l, r);
        return max(p1, p2);
    }
    private:
    int n;
    vector<ll> tree;
    vector<ll> lazy;
};



int main()
{
    return 0;
}