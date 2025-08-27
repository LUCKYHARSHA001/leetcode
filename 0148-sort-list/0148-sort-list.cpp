class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* fresh=head;
        vector<int>vec;
        while(fresh){
            vec.push_back(fresh->val);
            fresh=fresh->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* n= new ListNode(vec[0]);
        head=n;
        ListNode* temp=head;
        for(int i=1;i<vec.size();i++){
            ListNode* n1=new ListNode(vec[i]);
            temp->next=n1;
            temp=temp->next;
        }
        return head;
    }
};