#include<iostream>
#include<string>

using namespace std;

void ancestor(string a, string b) {
    cout << a << " is an ancestor of " << b << "\n";
}

void sameNode(string a, string b) {
    cout << a << " and " << b << " are the same node\n";
}

void notRelated(string a, string b) {
    cout << a << " and " << b << " are not related\n";
}

void checkRelated(int a, int b, string x, string y) {
    while(b > a) {
        b = (b - 1) / 2;
    }
    if(b == a) {
        ancestor(x, y);
    } else {
        notRelated("a", "b");
    }
}

int main() {
    int n,m, a, b;
    cin >> n>> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        if(a == b) {
            sameNode("a","b");
        }
        else if(a < b) {
            checkRelated(a, b, "a","b");
        } else {
            checkRelated(b, a, "b","a");
        }
    }
    return 0;
}
