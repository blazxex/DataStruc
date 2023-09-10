#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int N, M, A;
    cin >> N >> M >> A;

    vector<int> item_counts(N);
    for (int i = 0; i < N; ++i) {
        cin >> item_counts[i];
    }

    unordered_map<int, unordered_map<int, int>> user_bids;
    vector<set<pair<int, int>>> highest_bids(N);
    
    for (int i = 0; i < A; ++i) {
        char action;
        cin >> action;
        
        if (action == 'B') {
            int U, I, V;
            cin >> U >> I >> V;
            user_bids[U][I] = V;
            highest_bids[I - 1].insert({V, U});
            if (highest_bids[I - 1].size() > item_counts[I - 1]) {
                highest_bids[I - 1].erase(highest_bids[I - 1].begin());
            }
        } else if (action == 'W') {
            int U, I;
            cin >> U >> I;
            if (user_bids[U].count(I)) {
                int V = user_bids[U][I];
                highest_bids[I - 1].erase({V, U});
                user_bids[U].erase(I);
            }
        }
    }

    vector<vector<int>> user_won_items(M);
    for (int i = 0; i < N; ++i) {
        for (const auto& bid : highest_bids[i]) {
            int U = bid.second;
            user_won_items[U - 1].push_back(i + 1);
        }
    }

    for (int i = 0; i < M; ++i) {
        if (user_won_items[i].empty()) {
            cout << "NONE" << endl;
        } else {
            for (int item : user_won_items[i]) {
                cout << item << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
