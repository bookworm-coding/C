#pragma warning(disable: 4996)
#pragma warning(disable: 6031)
#include <algorithm>
#include <cmath>
#include <cstdbool>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
int main()
{
#ifndef testing
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
#endif
    int i = 0;
    int n = 0;
	int result = 0;
    char x;
	deque<char> p, q;
    stack<char> r;
	scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c", &x);
        p.push_back(x);
    }
    for (i = 0; i < n; i++) {
        scanf(" %c", &x);
        q.push_back(x);
    }
    do {
        bool t = false;
        for (auto k = 0; k < p.size(); k++) {
            if (p[k] == q.front()) {
                t = true;
            	break;
            }
        }
        if (t) {
            while (true) {
                if (p.back() != q.front()) {
                    r.push(p.back());
                    p.pop_back();
                    result++;
                }
                else {
                    q.pop_front();
                    p.pop_back();
                    result++;
                    break;
                }
            }
        }
        else {
            while (true) {
                if (r.top() != q.front()) {
                    p.push_back(r.top());
                    r.pop();
                    result++;
                }
                else {
                    q.pop_front();
                    r.pop();
                    result += 2;
                    break;
                }
            }
        }
    }while (!p.empty() || !r.empty());
    printf("%d", result);
    return 0;
}
