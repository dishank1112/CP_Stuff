#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define pii pair<int, int>
#define vi vector<int>
#define vpii vector<pii>
#define F first
#define S second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = b - 1; i >= a; i--)

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void buildSegTree(int i, int l, int r, vector<int> &segtree, vector<int> &arr)
{
    if (l > r)
        return;
    if (l == r)
    {
        segtree[i] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    buildSegTree(2 * i + 1, l, mid, segtree, arr);
    buildSegTree(2 * i + 2, mid + 1, r, segtree, arr);
    segtree[i] = segtree[2 * i + 1] + segtree[2 * i + 2];
}

void updateSegTree(vector<int> &segtree, int ind, int i, int l, int r, int val)
{
    if (l == r)
    {
        segtree[i] = val;
        return;
    }

    int m = (l + r) / 2;
    if (ind <= m)
    {
        updateSegTree(segtree, ind, 2 * i + 1, l, m, val);
    }
    else
    {
        updateSegTree(segtree, ind, 2 * i + 2, m + 1, r, val);
    }
    segtree[i] = segtree[2 * i + 1] + segtree[2 * i + 2];
}

int rangeSum(int lx, int rx, int i, int l, int r, vector<int> &segtree)
{
    // 3 cases:
    // 1st case: no overlap
    if (lx > r || rx < l)
    {
        return 0;
    }

    // 2nd case: full overlap
    if (lx <= l && rx >= r)
    {
        return segtree[i];
    }

    // 3rd case: partial overlap
    int m = (l + r) / 2;
    return rangeSum(lx, rx, 2 * i + 1, l, m, segtree) + rangeSum(lx, rx, 2 * i + 2, m + 1, r, segtree);
}

int main()
{
    fast_io(); // Optimize I/O operations

    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n) cin >> arr[i];

    vector<int> segTree(4 * n, 0);

    buildSegTree(0, 0, n - 1, segTree, arr);


    for (auto q : segTree) cout << q << " ";
    cout << endl;
    cout<<"Updation : "<<endl;
     int p;
     cin>>p;
     while(p--){
        int ind,val;
        cin>>ind>>val;
        updateSegTree(segTree,ind,0,0,n-1,val);
     }
     for (auto q : segTree)
         cout << q << " ";
     cout << endl;
     int m;
     cin >> m;
     while (m--)
     {
         int l, r;
         cin >> l >> r;
         cout << rangeSum(l, r, 0, 0, n - 1, segTree) << endl;
    }

    return 0;
}
