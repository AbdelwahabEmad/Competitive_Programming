#include <bits/stdc++.h>
using namespace std;


struct BinaryTrie {
    struct Node {
        Node *child[2];
        int frq[2];
        int leaf_freq;
        Node() {
            child[0] = child[1] = nullptr;
            frq[0] = frq[1] = 0;
            leaf_freq = 0;
        }
    };

    Node *root = new Node();

    void insert(int n) {
        Node *cur = root;
        for (int i = 29; i >= 0; i--) {
            bool idx = (n >> i) & 1;
            if (!cur->child[idx]) {
                cur->child[idx] = new Node();
            }
            cur->frq[idx]++;
            cur = cur->child[idx];
        }
        cur->leaf_freq++;
    }

    void del(int n, int depth, Node *cur) {
        if (depth == -1) return;
        bool idx = (n >> depth) & 1;
        del(n, depth - 1, cur->child[idx]);
        cur->frq[idx]--;
        if (cur->frq[idx] == 0) {
            delete cur->child[idx];
            cur->child[idx] = nullptr;
        }
    }

    void del(int n) {
        del(n, 29, root);
    }
};