// It stores a sequence of elements (nodes) where:

// Each node contains:
// Data (e.g., 21, 35, 47, 89)
// A link (pointer) to the next node
// The list has:
// A head → points to the first node
// A tail → last node, which points to NULL
 typedef struct Node {
    int data;              // store value
    struct Node* next;     // pointer to next node
} Node;


typedef struct List {
    Node* head;   // first node
    Node* tail;   // last node
} List;