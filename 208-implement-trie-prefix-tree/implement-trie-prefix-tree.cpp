class Trie {
    struct Node{
        Node* words[26];
        bool endOfWord;
        Node(){
            endOfWord=false;
            for(int i=0;i<26;i++){
                words[i]=nullptr;
            }
        }
    };
    Node* root;
public:
    Trie() {
        root=new Node();     
    }
    
    void insert(string word) {
        Node* temp=root;
        for(char ch:word){
            int idx=ch-'a';
            if(temp->words[idx]==nullptr){
                temp->words[idx]=new Node();
            }
            temp=temp->words[idx];
        }
        temp->endOfWord= true;
    }
    
    bool search(string word) {
        Node* temp=root;
        for(char ch:word){
            int idx=ch-'a';
            if(temp->words[idx]!=nullptr){
                temp=temp->words[idx];
            }else{
                return false;
            }
        }
        return temp->endOfWord;   
    }
    
    bool startsWith(string prefix) {
        Node* temp=root;
        for(char ch:prefix){
            int idx=ch-'a';
            if(temp->words[idx]==nullptr){
                return false;
            }
            temp=temp->words[idx];
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