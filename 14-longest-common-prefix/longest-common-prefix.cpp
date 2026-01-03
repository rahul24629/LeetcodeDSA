class Solution {
    class Node{
        public:
        unordered_map<char,Node*> children;
        bool endOfWord;
        int freq;
        Node(){
            endOfWord=false;
            freq=0;
        }
    };
    class Trie{
        public:
        Node* root;
        Trie(){
            root=new Node();
        }
        void insert(string &key){
            Node* temp=root;
            for(char ch:key){
                if(!temp->children.count(ch)){
                    temp->children[ch]=new Node();
                    temp->children[ch]->freq=1;
                }else{
                    temp->children[ch]->freq++;
                }
                temp=temp->children[ch];
            }
            temp->endOfWord=true;
        }
        void helper(Node* root,string &ans,string temp,int n){
            if(root->children.size()!=1) return;
            for(pair<char,Node*>child:root->children){
                if(child.second->freq < n) return;  
                temp += child.first;                 
                ans = temp;                         
                helper(child.second,ans,temp,n);
            }
        }
        string finalAns(int n){
            string ans="";
            helper(root,ans,"",n);
            return ans;
        }
    };
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie trie;
        for(int i=0;i<strs.size();i++){
            trie.insert(strs[i]);
        }
        return trie.finalAns(strs.size());  
    }
};