#include <iostream>
#include <list>

struct ListNode
{
    int val;
    ListNode *next;
    // ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void insertAthead(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    n->next = head;
    head = n;
}

void printList(ListNode *head)
{
    while (head != NULL)
    {
        std::cout << head->val << "->";
        head = head->next;
    }
}

ListNode *reverseList(ListNode *head)
{
    if (!head || !(head->next))
        return head;

    ListNode *node = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return node;
}

int main()
{
    char c;

    ListNode *head = NULL;
    insertAthead(head, 5);
    insertAthead(head, 4);
    insertAthead(head, 3);
    insertAthead(head, 2);
    insertAthead(head, 1);
    printList(head);
    std::cout << "\n";
    printList(reverseList(head));
    std::cin >> c;
}