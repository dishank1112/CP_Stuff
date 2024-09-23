#include <iostream>
#include <vector>

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

struct SegmentTree
{
    vector<int> segtree;
    int n;

 
    void build( vector<int> &arr)
    {
        n = arr.size();
        segtree.assign(4 * n, 0);
        buildSegTree(0, 0, n - 1, arr);
    }


    void buildSegTree(int i, int l, int r, const vector<int> &arr)
    {
        if (l > r)
            return;
        if (l == r){
            segtree[i] = arr[l];
            return;
        }
        int mid = (l + r) / 2;
        buildSegTree(2 * i + 1, l, mid, arr);
        buildSegTree(2 * i + 2, mid + 1, r, arr);
        segtree[i] = segtree[2 * i + 1] + segtree[2 * i + 2];
    }

    void update(int ind, int val)
    {
        updateSegTree(ind, 0, 0, n - 1, val);
    }

   
    void updateSegTree(int ind, int i, int l, int r, int val){
        if (l == r)
        {
            segtree[i] = val;
            return;
        }
        int m = (l + r) / 2;
        if (ind <= m)
        {
            updateSegTree(ind, 2 * i + 1, l, m, val);
        }
        else
        {
            updateSegTree(ind, 2 * i + 2, m + 1, r, val);
        }
        segtree[i] = segtree[2 * i + 1] + segtree[2 * i + 2];
    }
};


int rangeSum(int lx, int rx, int i, int l, int r, SegmentTree &st){
    if (lx > r || rx < l)
    {
        return 0;
    }
    if (lx <= l && rx >= r)
    {
        return st.segtree[i];
    }
    int m = (l + r) / 2;
    return rangeSum(lx, rx, 2 * i + 1, l, m, st) + rangeSum(lx, rx, 2 * i + 2, m + 1, r, st);
}

int main()
{
    fast_io();

    int n;
    cin >> n;
    vector<int> arr(n);
    rep(i, 0, n) cin >> arr[i];

    SegmentTree st;
    st.build(arr);

    for (auto q : st.segtree)
        cout << q << " ";
    cout << endl;

    cout << "Updation : " << endl;
    int p;
    cin >> p;
    while (p--)
    {
        int ind, val;
        cin >> ind >> val;
        st.update(ind, val);
    }

    for (auto q : st.segtree)
        cout << q << " ";
    cout << endl;

    int m;
    cin >> m;
    while (m--){
        int l, r;
        cin >> l >> r;
        cout << rangeSum(l, r, 0, 0, n - 1, st) << endl;
    }

    return 0;
}
