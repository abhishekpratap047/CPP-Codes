#include <iostream>
using namespace std;

class queue{

    private:

        int front = 0;
        int rear = 0;
        const static int capacity = 10;
        int arr[capacity];
        int elements=0;

    public:

    void enqueue(int n){
        if(front==capacity-1){
            cout<<"Queue is full";
        }
        else{
            arr[front]=n;
            front++;
            elements++;
        }

    }

    void dequeue(){
        if(front==rear){
            cout<<"Queue is empty";
        }
        else{
            int removed = arr[rear];
            for(int i=rear;i<=front;i++){
                arr[i]=arr[i+1];
            }
            front--;
            cout<<removed<<" Removed from queue"<<endl;
            elements--;
        }
    }


};


int main(){

    queue q1;
    q1.enqueue(4);
    q1.enqueue(6);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(8);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
}