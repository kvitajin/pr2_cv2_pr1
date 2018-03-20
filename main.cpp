#include <iostream>

/*class KeyValue{
    int key;
    double value;
    KeyValue *next;
public:
    KeyValue(int k, double v);
    ~KeyValue();
    int         GetKey();
    double      GetValue();
    KeyValue*   GetNext();
    KeyValue*   CreateNext(int k, double v);
};

KeyValue::KeyValue(int k, double v) {
    this->key=k;
    this->value=v;
    this->next= nullptr;
}
KeyValue::~KeyValue() {
    if (this->next != nullptr){
        delete this->next;
        this->next= nullptr;
    }
}
int KeyValue::GetKey() {
    return this->key;
}
double KeyValue::GetValue() {
    return this->value;
}
KeyValue* KeyValue::GetNext() {
    return this->next;
}
KeyValue* KeyValue::CreateNext(int k, double v) {
    this->next=new KeyValue(k,v);
    return this->next;
}



int main() {
    auto* prvy  =   new KeyValue(1,1.5);
    std::cout   <<  prvy->CreateNext(2,2.5)->GetKey()   <<  std::endl;


    KeyValue *druhy=prvy->GetNext();
    std::cout   <<  druhy->GetNext()    <<  std::endl;

    return 0;
}*/


class List{
private:
    List *head= nullptr, *tail= nullptr;

public:

    int value;
    int key;
    List *next;

    void add(int i, int key);
    void printKeys();
    void printValues();

};

void List::add(int i, int key){
    List* tmp;

    tmp = new List;
    tmp->value = i;
    tmp->key=key;
    tmp->next = head;
    head = tmp;


}

void List::printKeys() {
    List *p;
    p = head;
    std::cout   <<  "Keys:" <<  std::endl;
    while(p->next!= nullptr){
        std::cout <<  p->key   <<  std::endl;
        p=p->next;
    }
    std::cout <<  p->key   <<  std::endl;

}

void List::printValues() {
    List *p;
    p = head;
    std::cout   <<  "Values:" <<  std::endl;
    while(p->next!= nullptr){
        std::cout <<  p->value   <<  std::endl;
        p=p->next;
    }
    std::cout <<  p->value   <<  std::endl;

}

int main(){

    List list;
    for (int i = 0; i < 1000 ; ++i) {
        list.add(i*i, i);
    }

    list.printKeys();
    list.printValues();

    return 0;


}