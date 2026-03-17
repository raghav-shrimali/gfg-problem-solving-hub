/*
Problem: Sorted Linked List to BST
Platform: GeeksforGeeks

Approach:
- Convert linked list to array.
- Build BST using middle element (divide and conquer).

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
  public:
  
    void convert(Node* head, vector<int>& arr)
    {
        while(head)
        {
            arr.push_back(head->data);
            head = head->next;
        }
    }
    
    Node* buildBST(vector<int>& arr, int start, int end)
    {
        if(start > end)
            return NULL;
            
        int mid = (start + end) / 2;
        
        Node* root = new Node(arr[mid]);
        
        root->left = buildBST(arr, start, mid - 1);
        root->right = buildBST(arr, mid + 1, end);
        
        return root;
    }
  
    Node* sortedListToBST(Node* head) {
        vector<int> arr;
        convert(head, arr);
        return buildBST(arr, 0, arr.size() - 1);
    }
};
