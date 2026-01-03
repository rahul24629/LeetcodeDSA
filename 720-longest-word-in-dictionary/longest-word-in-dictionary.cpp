class Solution {
    class Node{
        public:
        unordered_map<char,Node*> children;
        bool endOfWord;
        Node(){
            endOfWord=false;
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
            }
            temp=temp->children[ch];
        }
        temp->endOfWord= true;
    }
    string longestWordEOW(){
        string ans="";
        helper(root,ans,"");
        return ans;
    }
    void helper(Node* root,string &ans,string temp){
        for(pair<char,Node*> child:root->children){
            if(child.second->endOfWord){
                temp+=child.first;
                if((temp.size()==ans.size() && temp<ans) || (temp.size()>ans.size())){
                    ans=temp;
                }
                helper(child.second,ans,temp);
                temp=temp.substr(0,temp.size()-1);
            }
        }
    };
    };
public:
    string longestWord(vector<string>& words) {
        Trie trie;
        for(int i=0;i<words.size();i++){
            trie.insert(words[i]);
        }
        return trie.longestWordEOW();
        
    }
};