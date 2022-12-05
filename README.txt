NOTE : The following programs demonstrate a variety of binary
           search tree operations with different data stored in the tree nodes.In all cases there are public methods to modify /
        access the tree
            and private methods that have tree nodes as parameters.

        --John

            tree : -Stores integer values in binary search tree -
    Demonstrates basic tree operations

    // Public methods
    bool
    Search(int Value);
bool Insert(int Value);
bool Delete(int Value);
void Print();

// Private methods
void DestroyHelper(Node *Tree);
bool SearchHelper(int Value, Node *Tree);
bool InsertHelper(int Value, Node *&Tree);
bool DeleteNode(Node *&Tree);
bool DeleteHelper(int Value, Node *&Tree);
void PrintHelper(Node *Tree);

tree2 : -Stores integer values in binary search tree - Demonstrates tree balance operation

        // Public methods
        bool
        Search(int Value);
bool Insert(int Value);
bool Delete(int Value);
void Print();
void Extract(int data[], int &count);
void Balance();

// Private methods
void CopyHelper(Node *Tree1, Node *&Tree2);
void DestroyHelper(Node *Tree);
bool SearchHelper(int Value, Node *Tree);
bool InsertHelper(int Value, Node *&Tree);
bool DeleteNode(Node *&Tree);
bool DeleteHelper(int Value, Node *&Tree);
void PrintHelper(Node *Tree);
void ExtractHelper(int data[], int &index, Node *Tree);
void BalanceHelper(int data[], int low, int high, Node *&Tree);

tree3 : -Stores strings in binary search tree - Uses counter to handle duplicate values

        // Public methods
        bool
        Search(string Word);
bool Insert(string Word);
bool Delete(string Word);
void Print();
void Print(ofstream &dout);

// Private methods
void CopyHelper(Node *Tree1, Node *&Tree2);
void DestroyHelper(Node *Tree);
bool SearchHelper(string Word, Node *Tree);
bool InsertHelper(string Word, Node *&Tree);
bool DeleteNode(Node *&Tree);
bool DeleteHelper(string Word, Node *&Tree);
void PrintHelper(Node *Tree);
void PrintHelper(Node *Tree, ofstream &dout);

tree4 : -Stores(int key, int value) pairs in binary search tree
        -
        Demonstrates basic tree operations

        // Public methods
        bool Search(int key, int &value);
bool Insert(int key, int value);
bool Delete(int key);
void Print();
void Print(ofstream &dout);

// Private methods
void CopyHelper(Node *Tree1, Node *&Tree2);
void DestroyHelper(Node *Tree);
bool SearchHelper(int key, int &value, Node *Tree);
bool InsertHelper(int key, int value, Node *&Tree);
bool DeleteNode(Node *&Tree);
bool DeleteHelper(int key, Node *&Tree);
void PrintHelper(Node *Tree);
void PrintHelper(Node *Tree, ofstream &dout);

tree5 : -Stores(string key, string value) pairs in binary search tree
        -
        Demonstrates basic tree operations

        // Public methods
        bool Search(string key, string &value);
bool Insert(string key, string value);
bool Delete(string key);
void Print();
void Print(ofstream &dout);

// Private methods
void CopyHelper(Node *Tree1, Node *&Tree2);
void DestroyHelper(Node *Tree);
bool SearchHelper(string key, string &value, Node *Tree);
bool InsertHelper(string key, string value, Node *&Tree);
bool DeleteNode(Node *&Tree);
bool DeleteHelper(string key, Node *&Tree);
void PrintHelper(Node *Tree);
void PrintHelper(Node *Tree, ofstream &dout);
