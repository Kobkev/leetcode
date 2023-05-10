#include <iostream>
#include <list>
#include <math.h>

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

/* ListNode *middleNode(ListNode *head) // Two Pointers Fast & Slow O(n)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
} */

ListNode *middleNode(ListNode *head) // Two Pointers
{
    ListNode *start = head;
    ListNode *end = head;
    float counter{0};

    while (end)
    {
        counter++;
        end = end->next;
    }

    /* if (counter % 2 == 0)
        counter++; */
    int i = ceil(counter / 2);

    for (i; i < counter; i++)
        start = start->next;

    return start;
}

int main()
{
    char c;

    ListNode *head = NULL;
    insertAthead(head, 6);
    insertAthead(head, 5);
    insertAthead(head, 4);
    insertAthead(head, 3);
    insertAthead(head, 2);
    insertAthead(head, 1);
    // printList(head);
    std::cout << "\n";
    printList(middleNode(head));
    std::cin >> c;
}