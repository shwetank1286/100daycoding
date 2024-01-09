/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//destructors never takes an argument nor does it returns any value
int count=0;

class num{
    public:
        num(){
            count ++;
            cout<<"this is the time when constructor is called fro object numebr"<<count<<endl;
        }
        
        ~num(){
            cout<<"this is the time when destructor is called fro object numebr"<<count<<endl;
            count --;
        }
};

int main()
{
    cout<<"we are inside main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"creating to more objects"<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}



//..............................................................................................

//gfg problem of the day 8 - 1 -2024
//day 24 
class Solution{
    public:
    struct Node* reverse(struct Node* ans){        //Reversing the Linked List
        Node* prev = NULL;
        Node* curr = ans;
        Node* forw = curr->next;
        
        while(curr){
            curr->next = prev;
            prev = curr;
            curr = forw;
            if(forw){
                forw = forw->next;
            }
        }
        return prev;
    }
    struct Node * mergeResult(Node *node1,Node *node2){
        if(node1 == NULL && node2 == NULL){
            return NULL;
        }
        struct Node* head1 = node1;
        struct Node* head2 = node2;
        
        struct Node* ans = newNode(-1);
        struct Node* t = ans;
        
        while(head1 != NULL && head2 != NULL){
            if(head1->data < head2->data){
                struct Node* temp = newNode(head1->data);
                t->next = temp;
                head1 = head1->next;
                t = t->next;
            }
            else{
                struct Node* temp = newNode(head2->data);
                t->next = temp;
                head2 = head2->next;
                t = t->next;
            }
        }
        
        while(head1){
            struct Node* temp = newNode(head1->data);
            t->next = temp;
            head1 = head1->next;
            t = t->next;
        }
        while(head2){
            struct Node* temp = newNode(head2->data);
            t->next = temp;
            head2 = head2->next;
            t = t->next;
        }
        
        return reverse(ans->next);
    }  
};

//leetcode 
//9 - 1 - 2024
class Solution {
 public:
  int rangeSumBST(TreeNode* root, int L, int R) {
    if(root == nullptr)
        return 0;
    if (root->val < L)
        return rangeSumBST (root -> right, L, R);
    if (root->val > R)
        return rangeSumBST (root -> left, L, R);
    return root -> val + rangeSumBST(root -> left, L, R) + rangeSumBST (root -> right, L, R);
  }
};
