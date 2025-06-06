class TrieNode{
    public: 
        bool isLeaf;
        vector<TrieNode*>child;
        TrieNode(){
            isLeaf=false;
            child.resize(26,nullptr);
        }
};
class Trie {
public:
    TrieNode* root;
    Trie() {
        root=new TrieNode;
    }
    
    void insert(string word) {
        TrieNode* curr=root;
        for(auto i:word){
            if(curr->child[i-'a']==nullptr){
                TrieNode* newnode=new TrieNode();
                curr->child[i-'a']=newnode;
            }
            curr=curr->child[i-'a'];
        }
        curr->isLeaf=true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(auto i:word){
            if(curr->child[i-'a']==nullptr) return false;
            curr=curr->child[i-'a'];
        }
        if(curr->isLeaf) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(auto i:prefix){
            if(curr->child[i-'a']==nullptr) return false;
            curr=curr->child[i-'a'];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */