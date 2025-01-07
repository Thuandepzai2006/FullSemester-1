#include <iostream>

using namespace std;

struct Node {
    int key;
    Node* pNext;
};
    
struct List {
    Node* pHead;
    Node* pTail;
};

Node* createNode(int data);
List createList(Node* pNode);
void addHead(List &L, int data);
void addTail(List &L, int data);
int size(Node a);
bool CheckEmpty(Node *ptr);
void removeHead(List &L);
void removeTail(List &L);
void removeAll(List &L);
void displayList(const List &L);
void removeBefore(List &L, int val);
void removeAfter(List &L, int val);
void addPos(List &L, int data, int pos);
void removePos(List &L, int pos);
void addBefore(List &L, int data, int val);
void addAfter(List &L, int data, int val);
void printList(List L);
int countElements(List L);
List reverseList(List L);
void removeDuplicate(List &L);
bool removeElement(List &L, int key);
void Input(List &L, int value);

int main(){
//Bai 1
    Node *node = new Node[42];

//Bai 2
    List mylist = createList(node);

    List mylist;
    mylist.pHead = nullptr;
    mylist.pTail = nullptr;

//Bai 3
    // addHead(mylist, 0);

//Bai 4
    addTail(mylist, 20);
    addTail(mylist, 20);
    addTail(mylist, 30);
    addTail(mylist, 20);
    addTail(mylist, 50);
    cout << "Inital list: ";
    displayList(mylist);

//Bai 5
    removeHead(mylist);

//bai 6
    removeTail(mylist);

//bai 7
    removeAll(mylist);

//Bai 8
    removeBefore(mylist, 30);

//Bai 9
    removeAfter(mylist, 20);

//Bai 10
    addPos(mylist, 30, 3);

//Bai 11
    removePos(mylist, 1);

//Bai 12
    addBefore(mylist, 15, 20);

//Bai 13
    addAfter(mylist, 15, 50);
    
//Bai 14
    printList(mylist);

//Bai 15
    cout << "The number of Element in the list: " << countElements(mylist) << endl;

//Bai 16
    mylist = reverseList(mylist);

//Bai 17
    removeDuplicate(mylist);

//Bai 18
    removeElement(mylist, 20);
    cout << "My list after remove: ";
    displayList(mylist);

//bai 19
    int val;
    Input(mylist, val);
    return 0;
}

//Bai 1
Node* createNode(int data){
    Node* newNode = new Node;
    newNode->key = data;
    newNode->pNext = NULL;
    return newNode;
}

//Bai 2
List createList(Node* pNode){
    List newlist;
    newlist.pHead = pNode;
    newlist.pTail = pNode;
    return newlist;
}

//bai 3
void addHead(List &L, int data){
    Node* node = new Node;  
    node->key = data;
    node->pNext = L.pHead;
    L.pHead = node;
    if(L.pTail == nullptr) L.pTail = node;
}

//Bai 4
void addTail(List &L, int data){
    Node *tmp = createNode(data);
    if(L.pHead == NULL){
        L.pHead = tmp;
        L.pTail = tmp;
    }
    else{
        L.pTail->pNext = tmp;
        L.pTail = tmp;
    }
}

int Size(Node *a){
    int count = 0;
    while(a != nullptr){
        count++;
        a = a->pNext;   //Gan dia chi cho node tiep theo cho node hien tai
                        //Gia tri do se nhay sang node tiep theo
    }
    return count;
}

bool CheckEmpty(Node *ptr){
    return ptr == NULL;
}

//Bai 5
void removeHead(List &L){
    if(L.pHead == NULL) return;
    Node* tmp = L.pHead;        //Save the current list
    L.pHead = L.pHead->pNext;   //Update Head
    delete tmp;                 //Free the memory
    if(L.pHead == NULL) L.pTail = NULL;
    //Update the tail if the first head is empty
}

// void removeHead(List &L){
//     if(L.pHead == NULL) return;
//     L.pHead = L.pHead->pNext;   //The old pHead turn into the new pHead
//     //This code leading to memory leak
// }

//Bai 6
void removeTail(List &L){
    if(L.pTail == NULL) return;
    if(L.pTail == L.pHead){
        delete L.pTail;
        L.pHead = L.pTail = NULL;
    }
    else{
            Node *tmp = L.pHead;
            while(tmp->pNext != L.pTail){
                tmp = tmp->pNext;
            }
            delete L.pTail;
            L.pTail = tmp;
            L.pTail->pNext = NULL;
    }

}

//Bai 7
void removeAll(List &L){
    if(L.pHead == nullptr) return ;
    Node *tmp = L.pHead;
    while(tmp->pNext != NULL){
        L.pHead = L.pHead->pNext;
        delete tmp;
        tmp = L.pHead;
    }
    L.pHead = L.pTail = nullptr;
}

void displayList(const List &L) {
    Node *tmp = L.pHead;
    while (tmp != nullptr) {
        cout << tmp->key << " -> ";
        tmp = tmp->pNext;
    }
    cout << "NULL" << endl;
}

//Bai 8
void removeBefore(List &L, int val){
    if(L.pHead  == nullptr || L.pHead->pNext == nullptr) return;
    Node *tmp = L.pHead;
    while(tmp->pNext != nullptr){
        if(tmp->pNext->pNext->key == val){
            Node *Dlt = tmp->pNext;
            tmp->pNext = tmp->pNext->pNext;
            delete Dlt;
        }
        tmp = tmp->pNext;
    }
}

//bai 9
void removeAfter(List &L, int val){
    if(L.pHead ==  nullptr || L.pHead->pNext == nullptr) return;
    Node *tmp = L.pHead;
    for(tmp; tmp != nullptr; tmp = tmp->pNext){
        if(tmp->key == val){
            Node *Erase = tmp->pNext;
            tmp->pNext = tmp->pNext->pNext;
            delete Erase;
        }
    }
}

//Bai 10
int ListSize(List &L){
    int count = 0;
    Node *tmp = L.pHead;
    while(tmp != NULL){
        count++;
        tmp = tmp->pNext;
    }
    return count;
}

void addPos(List &L, int data, int pos){
    int n = ListSize(L);
    if(pos <= 0 || pos > n + 1) return;
    if(pos == 1){
       addHead(L, data);
       return;
    }
    if(pos == n + 1){
        addTail(L, data);
        return;
    }
    else{
        Node *tmp = L.pHead;
        for(int i = 1; i < pos - 1; ++i){
            tmp = tmp->pNext;
        }
        Node *current = createNode(data);
        current->pNext = tmp->pNext;
        tmp->pNext = current;
    }
}

//Bai 11
void removePos(List &L, int pos){
    int n = ListSize(L);
    if(pos <= 0 || pos > n) return;
    if(pos == 1){
        removeHead(L);
        return;
    }
    if(pos == n){
        removeTail(L);
        return;
    }
    else{
        Node *current = L.pHead;
        int count = 1;
        while( current != NULL){
            if(count == pos - 1){
                Node *Dlt = current->pNext;
                current->pNext = current->pNext->pNext;
                delete Dlt;
                count = 1;
                return;
            }
            count++;
            current = current->pNext;
        }
    }
}

//Bai 12
void addBefore(List &L, int data, int val){
    if(L.pHead == NULL) return;
    Node *current = createNode(data);
    Node *tmp = L.pHead;
    if(tmp->key == val){
        addHead(L, data);
        return;
    }
    else{
        while(tmp != nullptr){
            if(tmp->pNext->key == val){
                current->pNext = tmp->pNext;
                tmp->pNext = current;
                return;
            }
            tmp = tmp->pNext;
        }
    }

}

//Bai 13
void addAfter(List &L, int data, int val){
    if(L.pHead == NULL) return;
    int n = ListSize(L);
    Node *ptr = createNode(data);
    Node *tmp = L.pHead;
    Node *current = L.pHead;
    for(int i = 1; i < n - 1; ++i){
        tmp = tmp->pNext;
    }
    if(tmp->pNext->key == val){
        addTail(L, data);
    }

    else{
            tmp = L.pHead;
            while(tmp != NULL){
            if(tmp->key == val){
                ptr->pNext = tmp->pNext;
                tmp->pNext = ptr;
                return;
            }
            tmp = tmp->pNext;
        }
    }
}

//Bai 14
void printList(List L){
    Node *tmp = L.pHead;
    while(tmp != NULL){
        cout << tmp->key << " --> ";
        tmp = tmp->pNext;
    }
    cout << "NULL" << endl;
}

//Bai 15
int countElements(List L){
    int count = 0;
    Node *tmp = L.pHead;
    while(tmp != nullptr){
        count++;
        tmp = tmp->pNext;
    }
    return count;
}

//Bai 16
List reverseList(List L){
    Node* prev = nullptr;
    Node* current = L.pHead;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->pNext;
        current->pNext = prev; 
        prev = current;       
        current = next;       
    }
    L.pTail = L.pHead;
    L.pHead = prev;
    return L;
}

//Bai 17
void removeDuplicate(List &L){
    if (L.pHead == NULL) return;
    Node *current = L.pHead;
    while(current != NULL){
        Node *tmp = current;
        while (tmp->pNext != NULL){
            if(current->key == tmp->pNext->key){
                Node *Dlt = tmp->pNext;
                tmp->pNext = tmp->pNext->pNext;
                delete Dlt;
            }
            tmp = tmp->pNext;
        }
        current = current->pNext;
    }
}

//Bai 18
bool removeElement(List &L, int key){
    if(!L.pHead) return true;
    while(L.pHead->key == key){
        Node *Dlt = L.pHead;
        L.pHead = L.pHead->pNext;
        delete Dlt;
    }
    if(!L.pHead) return true;
    Node *ptr = L.pHead;
        while(ptr->pNext != nullptr){
            if(ptr->pNext->key == key){
                Node *Dlt = ptr->pNext;
                ptr->pNext = ptr->pNext->pNext;
                delete Dlt;
            }
            ptr = ptr->pNext;
        }
}

//Bai 19
void Input(List &L, int val){
    Node *tmp = L.pHead;
    while(true){
        cin >> val;
        if(val == -1) break;
        addTail(L, val);
    }
}