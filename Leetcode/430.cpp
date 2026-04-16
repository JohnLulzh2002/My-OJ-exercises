#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
class Solution{
public:
    Node* flatten(Node* head){
        Node* p=head;
        while(p){
            if(p->child){
                Node* n=p->next;
                p->next=flatten(p->child);
                p->next->prev=p;
                p->child=NULL;
                while(p->next)p=p->next;
                p->next=n;
                if(n)
                    n->prev=p;
            }
            p=p->next;
        }
        return head;
    }
};
int main(){
    // std::vector<std::vector<int>> coins={
    // {0, 1, -1},
    // {1, -2, 3},
    // {2, -3, 4}
    // };

    // printf("%d\n",Solution::maximumAmount(coins));
    return 0;
}