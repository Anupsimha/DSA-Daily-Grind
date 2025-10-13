// class TrieNode{
//     public:
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;
//         TrieNode(char data){
//             this->data = data;
//             for(int i = 0 ; i < 26 ; i++){
//                 children[i] = NULL;
//             }
//             isTerminal = false;
//         }
// };

// class Trie {
//     public:
//         TrieNode* root;
//         Trie() {
//             root = new TrieNode('\0');
//         }
    
//         // Insert substring starting from a given index
//         int insert(string word) {
//             TrieNode* curr = root;
//             int count = 0;
    
//             for (int i = 0; i < word.size(); i++) {
//                 int index = word[i] - 'a'; 
//                 if (curr->children[index] == NULL) {
//                     curr->children[index] = new TrieNode(word[i]);
//                     count++; // a new node means a new unique substring
//                 }
//                 curr = curr->children[index];
//             }
    
//             curr->isTerminal = true;
//             return count;
//         }
// };


// int countDistinctSubstring(string s) {
//     Trie* t = new Trie();
//     int count = 0;

//     // Insert all substrings into the Trie
//     for (int i = 0; i < s.size(); i++) {
//         string suffix = s.substr(i);
//         count += t->insert(suffix);
//     }

//     // +1 to include the empty substring
//     return count + 1;
// }