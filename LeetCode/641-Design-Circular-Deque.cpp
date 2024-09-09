/*
By :-: savetrees
Used :-: Deque
*/
class MyCircularDeque {
public:
    deque<int>son;
    int size;
    MyCircularDeque(int k) {
      size=k;}
    bool insertFront(int value) {
     if(son.size()<size){
      son.push_front(value);
      return true;}
     return false;}
    bool insertLast(int value) {
      if(son.size()<size){
        son.push_back(value);
        return true;}
      return false;}
    bool deleteFront() {
      if(son.size()>0){son.pop_front();
      return true;}
      return false;}
    bool deleteLast() {
       if(son.size()>0){son.pop_back();
      return true;}
      return false;}
    int getFront() {
        if(son.empty())return -1;
        else return son.front();}
    int getRear() {
      if(son.empty())return -1;
      else return son.back();}
    bool isEmpty() {
      if(son.size()==0)return true;
      return false;}
    bool isFull() {return son.size()==size;}};

