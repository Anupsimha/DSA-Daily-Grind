// #include <bits/stdc++.h> 
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
//             childCount = 0;
//             wordCount = 0;
//             prefixCount = 0;
//         }
// };

// class Trie{

//     public:
//     TrieNode* root;

//     Trie(){
//         root = new TrieNode('\0');
//     }

//     void insertUtil(TrieNode* root , string word){
//         if(word.length() == 0){
//             root->isTerminal = true;
//             root->wordCount++;
//             return ;
//         }

//         int index = word[0] - 'a';
//         TrieNode* child;

//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }

//         child->prefixCount++;
//         insertUtil(child , word.substr(1));
//     }

//     void insert(string &word){
//         insertUtil(root , word);
//     }

//     int countWordsEqualToUtil(TrieNode* root , string word){
//         if(word.length() == 0){
//             return root->wordCount;
//         }

//         int index = word[0] - 'a';
//         TrieNode* child;

//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             return 0;
//         }

//         return countWordsEqualToUtil(child , word.substr(1));
//     }

//     int countWordsEqualTo(string &word){
//         return countWordsEqualToUtil(root , word);
//     }

//     int countWordsStartingWithUtil(TrieNode* root , string word){
//         if (word.length() == 0)
//             return root->prefixCount;

//         int index = word[0] - 'a';
//         TrieNode* child;

//         if (root->children[index] != NULL)
//             child = root->children[index];
//         else
//             return 0;

//         return countWordsStartingWithUtil(child, word.substr(1));
//     }

//     int countWordsStartingWith(string &word){
//         return countWordsStartingWithUtil(root , word);
//     }

//     bool eraseUtil(TrieNode* root, string word) {
//         if (word.length() == 0) {
//             if (root->isTerminal && root->wordCount > 0) {
//                 root->wordCount--;
//                 if (root->wordCount == 0)
//                     root->isTerminal = false;
//                 return true;
//             }
//             return false;
//         }

//         int index = word[0] - 'a';
//         TrieNode* child = root->children[index];
//         if (child == NULL)
//             return false;

//         bool found = eraseUtil(child, word.substr(1));

//         if (found) {
//             child->prefixCount--;
//             bool hasChildren = false;
//             for (int i = 0; i < 26; i++) {
//                 if (child->children[i] != NULL)
//                     hasChildren = true;
//             }

//             if (!child->isTerminal && !hasChildren && child->prefixCount == 0) {
//                 delete child;
//                 root->children[index] = NULL;
//             }
//         }

//         return found;
//     }

//     void erase(string &word){
//         eraseUtil(root, word);
//     }
// };