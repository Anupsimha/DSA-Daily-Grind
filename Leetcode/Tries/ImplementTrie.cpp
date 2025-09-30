// Most Optimal Implementation

// class Node {
//     bool _isTerminal = false;

//     public:
//     unordered_map<char, Node*> children;
//     Node() {

//     }

//     void setNext(char c, Node* nextP) {
//         children[c] = nextP;
//     }

//     Node* getNext(char c) {
//         return children[c];
//     }

//     void setTerminal() {
//         _isTerminal = true;
//     }

//     bool isTerminal() {
//         return _isTerminal;
//     }

//     bool isSet(char c) {
//         return children[c] != nullptr;
//     }
// };

// class Trie {
//     Node *head;
// public:
//     Trie() {
//         this->head = new Node();
//     }
    
//     void insert(string word) {
//         Node *curr = head;

//         for (size_t i = 0; i < word.size(); ++i) {
//             if (!curr->isSet(word[i])) {
//                 Node* node = new Node();
//                 curr->setNext(word[i], node);
//             }
//             curr = curr->getNext(word[i]);
//         }

//         curr->setTerminal();
//     }

//     bool search(string word) {
//         Node *curr = head;

//         for (size_t i = 0; i < word.size(); ++i) {
//             if (!curr->isSet(word[i])) return false;

//             curr = curr->getNext(word[i]);
//         }

//         return curr->isTerminal();
//     }
    
//     bool startsWith(string prefix) {
//         Node *curr = head;

//         for (size_t i = 0; i < prefix.size(); ++i) {
//             if (!curr->isSet(prefix[i])) return false;

//             curr = curr->getNext(prefix[i]);
//         }

//         return true;
//     }
// };




// class TrieNode{
//     public :
//         char data;
//         TrieNode* children[26];
//         bool isTerminal;

//         TrieNode(char ch){
//             data = ch;
//             for(int i = 0 ; i < 26 ; i++){
//                 children[i] = NULL;
//             }
//             isTerminal = false;
//         }
// };

// class Trie {
// public:
//     TrieNode* root;

//     Trie() {
//         root = new TrieNode('\0');
//     }
    
//     void insertUtil(TrieNode* root , string word){
//         if(word.length() == 0){
//             root->isTerminal = true;
//             return;
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

//         insertUtil(child , word.substr(1));
//     }

//     void insert(string word) {
//         insertUtil(root , word);
//     }
    
//     bool searchUtil(TrieNode* root , string word){
//         if(word.length() == 0){
//             return root->isTerminal;
//         }

//         int index = word[0] - 'a';
//         TrieNode* child;

//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             return false;
//         }

//         return searchUtil(child , word.substr(1));
//     }

//     bool search(string word) {
//         return searchUtil(root , word);
//     }

//     bool prefixUtil(TrieNode* root , string word){
//         //Base Case
//         if(word.length() == 0){
//             return true;
//         }
        
//         int index = word[0] - 'a';
//         TrieNode* child;
        
//         if(root->children[index] != NULL){
//             child = root->children[index];
//         }
//         else{
//             return false;
//         }
        
//         return prefixUtil(child , word.substr(1));
//     }
    
//     bool startsWith(string prefix) {
//         return prefixUtil(root , prefix);
//     }
// };