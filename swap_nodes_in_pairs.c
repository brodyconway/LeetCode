/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
        struct ListNode *node = head;
        struct ListNode *f = calloc(1, sizeof(struct ListNode));
        struct ListNode *h = f;
        if(node == NULL){
            return NULL;
        }
        if(node->next == NULL){
            return head;
        }
        int i = 0;
        for(;node != NULL && node->next != NULL; i++){
            if(i % 2 == 0){
                h->val = node->next->val;
                h->next = calloc(1, sizeof(struct ListNode));
                h = h->next;
            }else{
                h->val = node->val;
                if(node->next->next != NULL){
                    node = node->next->next;
                    h->next = calloc(1, sizeof(struct ListNode));
                    if(node->next == NULL){
                        h->next->val = node->val;
                    }
                    h = h->next;
                }else{
                    node = node->next;
                }
            }
            
        }
        return f;

}
