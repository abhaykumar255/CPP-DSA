#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101 // maximum size of array

// creating a class named queue
class Queue{
    private:
            int a[MAX_SIZE];
            int front, rear;
    public:
            // set front and rear = -1
            Queue(){
                front=-1;
                rear=-1;
            }
            // to check queue is full or not
            bool Isfull(){
                return (rear+1)%MAX_SIZE== front ? true : false;
            }
            // to check queue is empty or not
            bool Isempty(){
                return (rear==-1 && front==-1);
            }

            void enqueue(int x){
                cout<<"enqueuing "<<x<<"\n";
                if(Isfull()){
                    cout<<"Error : Queue is full";
                    return;
                }
                if(Isempty()){
                    front=rear=0;
                }
                else{
                    rear=(rear+1)%MAX_SIZE;
                }
                a[rear]=x;
            }

            void dequeue(){
                cout<<"dequeuing "<<"\n";
                if(Isempty()){
                    cout<<"Error: Queue is empty"<<endl;
                }
                else if(front==rear){
                    front=rear=-1;
                }
                else{
                    front=(front+1)%MAX_SIZE;
                }
            }

            //retrun front of queue
            int Front(){
                if(front==-1){
                    cout<<"Cannot return"<<endl;
                    return -1;
                }
                return a[front];
            }

            void Print(){
                int count=(rear+MAX_SIZE-front)%MAX_SIZE+1;
                for(int i=0;i<count;i++){
                    int index=(front+i)%MAX_SIZE; // index for traversing circulally
                    cout<<a[index]<<" ";
                }
                cout<<"\n\n";
            }
};

int main(){
    Queue q; // creating instance of queue

    q.enqueue(2); 
    q.Print();  
    q.enqueue(4);  
    q.Print();  
    q.enqueue(6);  
    q.Print();
    q.dequeue();	  
    q.Print();
    q.enqueue(8);  
    q.Print();
}