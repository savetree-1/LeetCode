class MyCircularQueue {
public:
    int *son, front, rear, size;
    MyCircularQueue(int k) {
        size = k;
        son = new int[size];
        rear = front = -1;}
    bool enQueue(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % size;
        son[rear] = value;
        if (front == -1) front = 0;return true;}
    bool deQueue() {
        if (isEmpty()) return false;  
        if (front == rear) {front = rear = -1;} 
        else {front = (front + 1) % size;}
        return true;}
    int Front() {
        if (isEmpty()) return -1;
        return son[front];}
    int Rear() {
        if (isEmpty()) return -1;
        return son[rear];}
    bool isEmpty() {return (front == -1);}
    bool isFull() {return ((rear + 1) % size == front); }};
