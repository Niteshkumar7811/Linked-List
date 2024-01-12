#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrayToLinkedList(vector<int>& arr){
    int n = arr.size();
    Node* newNode = new Node(arr[0]);
    Node* temp = newNode;

    for(int i = 1; i < n; i++){
        Node* cur = new Node(arr[i]);
        temp->next = cur;
        temp = temp->next;
    }
    return newNode;
}

int main(){
    int n;
    cout<<"Take the size of input arrya: ";
    cin>> n;
    vector<int> nums(n);
    cout<<"Enter the number for input array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Node* head = convertArrayToLinkedList(nums);
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}
