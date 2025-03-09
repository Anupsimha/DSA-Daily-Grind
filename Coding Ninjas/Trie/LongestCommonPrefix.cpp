// Approach 1

// string longestCommonPrefix(vector<string> &arr, int n)
// {
//     string ans = "";
//     int minLength = arr[0].size();

//     for (int i = 1; i < n; i++) {
//         minLength = min(minLength, (int)arr[i].size());
//     }

//     for(int i = 0 ; i<minLength ; i++){
//         char data = arr[0][i];
//         for(int j = 1 ; j < n ; j++){
//             if(data != arr[j][i]){
//                 return ans;
//             }
//         }
//         ans += data;
//     }

//     return ans;
// }


// Approach 2 - Using Trie's

// class TrieNode{
//     public:
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;
//         int childCount;
//         TrieNode(char data){
//             this->data = data;
//             for(int i = 0 ; i<26 ; i++){
//                 children[i] = NULL;
//             }
//             isTerminal = false;
//             childCount = 0;
//         }
// };

// class Trie{
//     public:
//         TrieNode* root;

//         Trie(){
//             root = new TrieNode('\0');
//         }

//         void insertUtil(TrieNode* root , string word){
//             //Base Case
//             if(word.length() == 0){
//                 root->isTerminal = true;
//                 return ;
//             }
            
//             //Assumption, word will be in CAPS
//             int index = word[0] - 'a';
//             TrieNode* child;
            
//             if(root->children[index] != NULL){
//                 child = root->children[index];
//             }
//             else{
//                 child = new TrieNode(word[0]);
//                 root->childCount++;
//                 root->children[index] = child;
//             }
            
//             //RECURSION
//             insertUtil(child , word.substr(1));
//         }
        
//         void insertWord(string word){
//             insertUtil(root , word);
//         }

//         void lcp(string str , string &ans){
//             for(int i = 0 ; i < str.length() ; i++){
//                 char ch = str[i];

//                 if(root->childCount == 1){
//                     ans += ch;
//                     int index = ch - 'a';
//                     root = root->children[index];
//                 }
//                 else{
//                     break;
//                 }

//                 if(root->isTerminal){
//                     break;
//                 }
//             }
//         }
// };

// string longestCommonPrefix(vector<string> &arr, int n)
// {
//     Trie *t = new Trie('\0');

//     for(int i = 0 ; i < n ; i++){
//         t->insertWord(arr[i]);
//     }

//     string first = arr[0];
//     string ans = "";

//     t->lcp(first , ans);
//     return ans;
// }


