

struct node{
   int value;
   struct node* next;
 };
 typedef struct node node_t;

void printList(node_t *head);
void *insertNodeBetween(node_t *nodeBefore, node_t *newNode);
node_t *create_new_node(int value);
node_t *insertBeginning(node_t **head, node_t *node_to_insert);
node_t *findNode(node_t *head, int value);
