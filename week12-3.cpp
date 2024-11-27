// week12-3.cpp 學習計畫 linked list 第一題
// leetcode 21. Merge Two Sorted Lists
class Solution {
public: // * 代表指標,老師把它叫槍上,用來用來的[準心]
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); //空包彈
        ListNode* now = ans; //答案放在 now 裡面
        while(list1 != nullptr || list2 != nullptr){ 
            if(list1==nullptr){ //有一個是空的
                now->next = list2; //另外一個,全部都上
                list2 = nullptr; //清空
            }else if(list2==nullptr){ //有一個是空的
                now->next = list1; //另外一個,全部都上
                list1 = nullptr;
            }else if(list1->val < list2->val){ //list 是小的
                now->next = new ListNode(list1->val); //答案放在 now 的下一筆, 放小的
                list1 = list1->next; //list1換下一筆
                now = now->next; //現在也換下一筆
            }else{
                now->next = new ListNode(list2->val); //答案放在 now 的下一筆, 放小的
                list2 = list2->next; //list2換下一筆
                now = now->next; //現在也換下一筆
            }
        }
        return ans->next; //空包彈的下一筆,才是真的答案
    } 
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */