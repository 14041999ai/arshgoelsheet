class BSTIterator {
    private:
    stack<TreeNode*> st;
public:
    
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }
    
    int next() {
        TreeNode* temp=st.top();
        st.pop();
        pushLeft(temp->right);
        return temp->val;
    }
    
    bool hasNext() {
        if(!st.empty()){
            return true;
        }
        return false;
    }
    
    void pushLeft(TreeNode* root){
        while(root!=NULL){
            st.push(root);
            root=root->left;
        }
    }
};