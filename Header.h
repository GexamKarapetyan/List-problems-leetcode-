//1
/*
class Solution {
public:
    bool hasCycle(ListNode* head) {
        unordered_set<ListNode*> addresses;
        while (head)
        {
            auto emp = addresses.emplace(head);
            if (!emp.second)
                return true;
            head = head->next;
        }
        return false;
    }
};
*/

//2
/*
class Solution {
public:
    ListNode* insertionSortList(ListNode* head)
    {
      ListNode* dm = new ListNode(0);
        ListNode * curr = dm;
        while(head){
            ListNode * tmp = head->next;
            curr = dm;
            while(curr->next && curr->next->val<=head->val){
                curr = curr->next;
            }
            head->next = curr->next;
            curr->next = head;
            head = tmp;
        }
        return dm->next;
    }
};
*/

//3
/*
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        if (head == nullptr)
            return head;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr != nullptr)
        {
            if(head->val == val){
                head = head->next;
            }
            if(curr->val == val && prev != nullptr){
                prev->next = curr->next;
                curr = prev->next;
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
*/

//4
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next==nullptr){
            return head;
        }
        ListNode* prevNode = nullptr;
        ListNode* nextNode = head;
        ListNode* tmpNode = head;
        while(tmpNode->next != nullptr){
            nextNode = tmpNode->next;
            tmpNode->next = prevNode;
            prevNode = tmpNode;
            tmpNode = nextNode;
        }
        nextNode = tmpNode->next;
        tmpNode->next = prevNode;
        prevNode = tmpNode;
        tmpNode = nextNode;
        head = prevNode;
        return head;
    }
};
*/

//5
/*
class Solution
{
public:
       int addDigits(int num)
        {
       while(num >= 10)
       {
           int sum = 0;
           while(num > 0)
           {
               sum += num % 10;
               num /= 10;
           }
           num = sum;
       }
        return num;
       }
};
*/

//6
/*
class Solution {
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
     if(list1 != nullptr && list2!= nullptr)
     {
      ListNode* cmp{};
     if(list1->val <= list2->val)
     {
         cmp = list1;
         cmp->next = mergeTwoLists(list1->next,list2);
     } else
      {
       cmp  = list2;
       cmp->next = mergeTwoLists (list1,list2->next);
      }
    return cmp;
    }
    return list1 == nullptr ? list2 : list1;
}
};
*/

//7
/*
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* pr = node;
        while(pr != nullptr && pr->next != nullptr){
            pr->val = pr->next->val;
            if (pr->next->next == nullptr) {
                ListNode* del = pr->next;
                pr->next = nullptr;
                delete del;
            }
            pr = pr->next;
        }
    }
};
*/

//8
/*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head)
            return nullptr;
        ListNode* p1 = new ListNode();
        ListNode* p2 = new ListNode();
        ListNode* first = p1;
        ListNode* mid = p2;
        while (head){
            if(head->val < x){
                p1->next = head;
                p1 = p1 ->next;
            }
            else{
                p2->next = head;
                p2 = p2->next;
            }
            head = head->next;
        }
        p2->next = nullptr;
        p1->next = mid->next;
        return first->next;
    }
};
*/


//9

/*
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
    if(!head || k == 0) return head;

        ListNode* cur = head;
        int len = 1;
        while(cur->next != nullptr)
        {
            ++len;
            cur = cur -> next;
        }
        cur->next = head;
        k = len - k % len;
        while(k--){
            cur = cur->next;
        }
        head = cur->next;
        cur->next = nullptr;

        return head;
    }
};
*/

//10
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode * fast = head;
        ListNode * slow = head;

        while(fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};
*/