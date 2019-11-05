//
// Created by PhantomCracker on 11/5/2019.
//

// Definition for singly-linked list:
// template<typename T>
// struct ListNode {
//   ListNode(const T &v) : value(v), next(nullptr) {}
//   T value;
//   ListNode *next;
// };
//
ListNode<int> * removeKFromList(ListNode<int> * l, int k) {
    if (l == NULL) return NULL;
    l->next = removeKFromList(l->next, k);
    if (l->value == k) return l->next;
    return l;
}

