// class TrieNode{
//     public:
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;
//         int childCount;  // helps in deletion
//         int wordCount;   // how many words end here (for duplicates)
//         int prefixCount; // how many words pass through this node

//         TrieNode(char ch) {
//             data = ch;
//             for (int i = 0; i < 26; i++)
//                 children[i] = NULL;
//             isTerminal = false;
//         }
// };

// class Trie{
//     public:
//         TrieNode* root;
    
//         Trie(){
//             root = new TrieNode('\0');
//         }
    
//         void insertUtil(TrieNode* root , string word){
//             if(word.length() == 0){
//                 root->isTerminal = true;
//                 return ;
//             }
    
//             int index = word[0] - 'a';
//             TrieNode* child;
    
//             if(root->children[index] != NULL){
//                 child = root->children[index];
//             }
//             else{
//                 child = new TrieNode(word[0]);
//                 root->children[index] = child;
//             }
    
//             insertUtil(child , word.substr(1));
//         }
    
//         void insert(string &word){
//             insertUtil(root , word);
//         }
        
//         bool allPrefixesExist(string word) {
//             TrieNode* curr = root;
//             for (char c : word) {
//                 int index = c - 'a';
//                 if (curr->children[index] == NULL)
//                     return false;
//                 curr = curr->children[index];
//                 if (!curr->isTerminal)  // prefix not complete
//                     return false;
//             }
//             return true;
//         }
// };

// class Solution {
//     public:
//     string longestValidWord(vector<string>& words) {
//         int n = words.size();
        
//         Trie *t = new Trie();
        
//         for(int i = 0 ; i < n ; i++){
//             t->insert(words[i]);
//         }
        
//         string ans = "";

//         for (string &word : words) {
//             if (t->allPrefixesExist(word)) {
//                 if (word.length() > ans.length() || 
//                    (word.length() == ans.length() && word < ans)) {
//                     ans = word;
//                 }
//             }
//         }

//         return ans;
        
//     }
// };