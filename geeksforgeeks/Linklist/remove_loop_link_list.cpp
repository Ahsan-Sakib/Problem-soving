#include <iostream>
#include <sstream>
#include <map>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int length(Node *head)
{
    int ret = 0;
    while (head)
    {
        ret++;
        head = head->next;
    }

    return ret;
}

class Solution
{
public:
    void removeLoop(Node *head)
    {
        // Node *walk = head->next;
        // Node *previousNode = head;
        // map<string,int> hashtable;
        // while (previousNode->next != NULL)
        // {
        //     string hashaddress;
        //     if (hashtable[hashaddress]>0)
        //     {
        //         previousNode->next = NULL;
        //         return;
        //     }else{
        //         hashtable[hashaddress] = 0;
        //         previousNode = previousNode->next;
        //         walk = walk->next;
        //     }
        // }
        // code

        Node *slow = head;
        Node *fast = head->next;
        while (slow->next != NULL)
        {

            if (slow == fast)
            {                
               while (slow->next != NULL)
               {

                if(slow->next == fast){
                    slow->next = NULL;
                }else
                {
                    slow = slow->next;
                }
               }
               
                return;
            }
            else
            {
                slow = slow->next;
                fast = fast->next->next;
            }
        }
    }
};

void loopHere(Node *head, Node *tail, int position)
{

    if (position == 0)
        return;

    Node *walk = head;

    for (int i = 1; i < position; i++)
        walk = walk->next;

    tail->next = walk;
}

bool isLoop(Node *head)

{
    if (!head)
        return false;

    Node *fast = head->next;
    Node *slow = head;

    while (fast != slow)
    {
        if (!fast || !fast->next)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;
        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        Solution ob;
        ob.removeLoop(head);

        if (isLoop(head) || length(head) != n)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }

    return 0;
}
