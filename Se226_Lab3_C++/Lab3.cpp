#include <iostream>

using namespace std;

class Node {
public:
    //datayı pointlememe gerek yok zaten ben giricem
    int data;
    Node *next;
};

class Queue {
public:
    Node *front;
    Node *rear;

    Queue() {
        front = rear = NULL;
    }
    //boş olup olmadığını boolean ile kontrol ediyorum
    bool isEmpty() {
        return front == NULL;
    }
    //enqueue işlemi yaparken pointer kullanıyorum ki bellekteki konumuna ulaşabileyim
    void enqueue(int x) {
        //*temp kullanma sebebim pointer yine eklemek için
        Node *temp = new Node();
        temp->data = x;
        temp->next = NULL;

        // bu kısımda eğer boş ise front ve rearı tempe eşitliyorum, çünkü bir eleman olacak
        if (isEmpty()) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    //top kısmını silme işlemini yapıyorum dequeue yaparken
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! " << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }
    int size(){
        int count = 0;
        Node *temp =front;
        //temp null çevirene kadar devam edip sayacak
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    //burada zaten front kısmında bulunan integerımızı returnluyorum
    int top() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return false;
        }
        return front->data;
    }
    //bunu ekstra olarak yazdım hocam enqueue ve dequeue işlemlerinin listeye etkisini göstermek için
    //aslında top olduğunu daha düzgün belirtmem için listeyi traverselemem lazım ama uğraşmadım hocam affedin.
    void print() {
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    //queue oluşturuyorum
    Queue queue;
    if (queue.isEmpty()) {
        cout << "Queue is empty! " << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    cout << "Elements in the queue: " << queue.size() << endl;
    //bu kısımda 43ten başlayarak front kısmına ekleyecek ve 43 top olacak
    queue.enqueue(43);
    queue.enqueue(9);
    queue.enqueue(21);
    queue.enqueue(33);
    queue.enqueue(60);
    queue.print();
    cout << "Elements in the queue after enqueue: " << queue.size() << endl;
    cout << "Top element in queue: " << queue.top() << endl;

    //2 adet dequeue yapıyorum
    cout << " " << endl;
    queue.dequeue();
    queue.print();
    queue.dequeue();
    cout << " " << endl;

    cout << "Top element in queue after double dequeue operations: " << queue.top() << endl;
    //alttaki print ile  listenin 2 dequeue işleminden sonra 21'in top eleman olduğunu gördüm
    queue.print();
    if (queue.isEmpty()){
        cout <<"queue is empty" << endl;
    }
    else{
        cout <<"queue is not empty" << endl;
    }
    return 0;
}