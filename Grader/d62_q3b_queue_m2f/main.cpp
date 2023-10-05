#include <stdio.h>
#include <iostream>
#include <vector>
#include "queue.h"
#include "student.h"

using namespace std;

int main() {
  // CP::queue<int> q;
  // char c;
  // scanf("%c", &c);
  // while (c != 'q') {
  //   if (c == 'u') {
  //     // add data
  //     int v;
  //     scanf("%d", &v);
  //     q.push(v);
  //   } else if (c == 'o') {
  //     q.pop();
  //   } else if (c == 'p') {
  //     q.print();
  //   } else if (c == 'm') {
  //     int p;
  //     scanf("%d", &p);
  //     q.move_to_front(p);
  //   }
  //   scanf("%c", &c);
  // }
  // return 0;
  
#include <unordered_map>
#include <vector>
#include <algorithm>

int intfurthest(std::vector<int> &v) {
    std::unordered_map<int, int> m;
    int maxDistance = 0;

    for (int i = 0; i < v.size(); i++) {
        if (m.find(v[i]) == m.end()) {
            // ถ้ายังไม่เคยพบค่านี้, เพิ่มค่านี้เข้า map พร้อมตำแหน่งที่พบ
            m[v[i]] = i;
        } else {
            // ถ้าพบค่านี้แล้ว, คำนวณระยะห่างและเปรียบเทียบกับ maxDistance
            maxDistance = std::max(maxDistance, i - m[v[i]]);
        }
    }

    return maxDistance;
}

}
