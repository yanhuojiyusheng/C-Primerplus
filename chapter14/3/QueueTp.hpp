#pragma once
template <typename T>
class Queue
{
private:
    int capacity;
    int front;
    int rear;
    int len;
    T* items;

public:
    Queue();
    Queue(int c);
    ~Queue() { delete[] items; }
    bool push(const T& t);
    T pop();
    const T& peek() { return items[front]; }
    const T& back() { return items[rear-1]; }
    bool empty() const { return front == rear; }
    int length() const { return len; }
};

template <typename T>
Queue<T>::Queue() : capacity(10), front(0), rear(0), len(0)
{
    items = new T[capacity];
}
template <typename T>
Queue<T>::Queue(int c) : capacity(c), front(0), rear(0), len(0)
{
    items = new T[capacity];
}
template <typename T>
bool Queue<T>::push(const T& t)
{
    if (len == capacity) return false;
    items[rear] = t;
    rear = (rear + 1) % capacity;
    len++;
    return true;
}
template <typename T>
T Queue<T>::pop()
{
    if (len == 0) return nullptr;
    int temp = front;
    front = (front + 1) % capacity;
    len--;
    return items[temp];
}
