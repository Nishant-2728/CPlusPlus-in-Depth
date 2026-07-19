#include<iostream>
using namespace std;
class Node;
class List;
class Iterator{
    Node* node;
    List *list;
public:
    Iterator(): node(0),list(0){};
    void begin(List *);
    bool end();
    void next();
    int data();
};
class List{
    Node* head;
    Node* tail;
public:
    List(Node* h=0): head(h),tail(h){}
    void append(Node* p);
    friend class Iterator;
};
class Node{
    int info;
    Node* next;
public:
    Node(int i): info(i),next(0){}
    friend class List;
    friend class Iterator;
};
void Iterator::begin(List* l){
    list=l;
    node=l->head;
}
bool Iterator::end(){
    return node==0;
}
void Iterator::next(){
    node=node->next;
}
int Iterator::data(){
    return node->info;
}
void List::append(Node* p){
    if(!head){
        head=tail=p;
    }
    else{
        tail->next=p;
        tail=tail->next;
    }
}
int main(){
    List l;
    Node n1(1),n2(2),n3(3);
    l.append(&n1);
    l.append(&n2);
    l.append(&n3);
    Iterator i;
    for(i.begin(&l);!i.end();i.next()){
        cout<<i.data()<<" ";
    }
}
