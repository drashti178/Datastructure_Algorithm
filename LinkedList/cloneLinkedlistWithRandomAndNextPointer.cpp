#include<bits/stdc++.h>
#include<math.h>

using namespace std;
struct Node{
	int data;
	struct Node * next;
	struct Node * arb;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    arb = NULL;
	}
	
};
class Solution
{
    public:
    Node *copyList(Node *head)
    {
        Node *curr=head;
        Node *front=head;
        while(curr != NULL){
            front=curr->next;
            Node *temp=new Node(curr->data);
            curr->next=temp;
            temp->next=front;
            curr=front;
        }
        curr=head;
    
        while(curr)
        {
            if(curr->arb != NULL){           
                curr->next->arb=curr->arb->next;
                curr=curr->next->next;
            }
            curr=curr->next->next;
        }
        curr=head;
        front=head;
        
        Node* dummy=new Node(0);
        dummy->next=curr->next;
        Node* itr=dummy;
        
        while(curr != NULL)
        {
            front=curr->next->next;
            itr->next=curr->next;
            curr->next=front;
            curr=curr->next;
            itr=itr->next;
            
        }
        return dummy->next;
        }
};