#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A) {

    vector<int> freq(26, 0);
    queue<char> q;
    string ans = "";

    for (int i = 0; i < A.size(); i++) {
        char ch = A[i];
        freq[ch - 'a']++;
        q.push(ch);

        while (!q.empty() && freq[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty())
            ans += '#';
        else
            ans += q.front();
    }
    return ans;
}
