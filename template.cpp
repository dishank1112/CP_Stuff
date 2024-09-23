#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::remove

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

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fast_io();

ll t;
cin>>t;
while(t--){
    
}
    return 0;
}
// well hello there i am jiraya u can send love legtters later its reslly noice to meet ya

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()

// void fast_io()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// int main()
// {
//     fast_io();
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<int> ans;
//         vector<vector<char>> arr(n, vector<char>(4));

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }

//         for (int i = n - 1; i >= 0; i--)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 if (arr[i][j] == '#')
//                 {
//                     ans.push_back(j + 1);
//                     break;
//                 }
//             }
//         }

//         for (auto p : ans)
//         {
//             cout << p << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vpii vector<pii>
// #define F first
// #define S second
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define per(i, a, b) for (int i = b - 1; i >= a; i--)

// void fast_io() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// int main()
// {
//     fast_io();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x,y,k;
//         cin >> x>>y>>k;

//         int i = 0;
//         int j = 0;
//         int ans = 0;
//         int pick = 0;
//         while(i == x && j == y){
//             if(pick == 0){
//                 ans++;
//                 if(i+k < x){
//                     i+=k;
//                 }
//                 else{
//                     i = x;
//                 }
//                 pick = 0;
//             }
//             else if(pick == 1){
//                 ans++;
//                 if (j + k < y)
//                 {
//                     j += k;
//                 }
//                 else
//                 {
//                     j = y;
//                 }
//                 pick = 0;
//             }
//             cout<<ans<<endl;
//         }
        
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(v) (v).begin(), (v).end()
// #define pii pair<int, int>
// #define vi vector<int>
// #define vpii vector<pii>
// #define F first
// #define S second
// #define rep(i, a, b) for (int i = a; i < b; i++)
// #define per(i, a, b) for (int i = b - 1; i >= a; i--)

// void fast_io() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// int main()
// {
//     fast_io();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
        
        
//     }

//     return 0;
// }