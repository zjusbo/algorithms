#include "iostream"
#include "random"
#include "time.h"
using namespace std;
template<typename T>
class Heap
{
private:
    int capacity;
    int size;
    T * element;
public:
    Heap(int x):capacity(x),size(0),element(new T[x + 1]){element[0] = 0;}
    void insert(T x);
    bool isEmpty(){return (size == 0 || capacity == 0)?true:false;}
    T deleteMin();
};
template <typename T>
void Heap<T>::insert(T x){
    if (size == capacity){
        cout<<"full"<<endl;
        return ;
    }
    int i;
    for (i = ++size; element[i / 2] > x; i = i / 2)
    {
        element[i] = element[i/2];
    }
    element[i] = x;
}
template <typename T>
T Heap<T>::deleteMin(){
    if (isEmpty()){
        cout<<"empty"<<endl;
        return NULL;
    }
    T min = element[1];
    T lastElement = element[size--];
    int child;
    int i;
    for (i = 1; i * 2 <= size; i = child)
    {
        child = i * 2;
        if (child + 1 <= size && element[child +1] < element[child])
        {
            child++;
        }
        if (element[child] < lastElement){
            element[i] = element[child];
        }
        else{
            break;
        }
    }
    element[i] = lastElement;
    return min;
}
int main(int argc, char const *argv[])
{
    int size = 5;
    Heap<int> * h = new Heap<int>(size);
    srand((unsigned)time(NULL));
    for (int i = 0; i < size; ++i)
    {
        h->insert(rand());
    }
    for (int i = 0; i < size; ++i)
    {
        cout<<h->deleteMin()<<endl;
    }
    
    return 0;
}