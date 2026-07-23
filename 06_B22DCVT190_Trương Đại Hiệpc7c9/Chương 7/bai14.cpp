#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Nhap s1: ";
    getline(cin, s1);
    cout << "Nhap s2: ";
    getline(cin, s2);

    int m = s1.length();
    int n = s2.length();

    int dp[1001][1001] = {0};

    int maxLen = 0;
    int endPos = 0;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endPos = i;
                }
            }
        }
    }

    cout << "Xau con chung dai nhat: ";
    cout << s1.substr(endPos - maxLen, maxLen);

    return 0;
}
