// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

int maximum(struct Node* head);
int minimum(struct Node* head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        cout << maximum(head) << " " << minimum(head) << endl;
    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }
        
};
*/

int maximum(Node *head)
{
    //Your code here
    Node* ptr = head;
    int temp;
    int max=0;
    while(ptr!=NULL){
        temp = ptr->data;
        if(temp>max){
            max = temp;
        }
        ptr=ptr->next;
    }
    return max;
}

int minimum(Node *head)
{
    //Your code here
    int min=99999;
    int temp;
    Node* ptr = head;
    while(ptr!=NULL){
        temp = ptr->data;
        if(temp<min){
            min = temp;
        }
        ptr=ptr->next;
    }
        return min;
}