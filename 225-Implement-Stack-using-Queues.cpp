/*
By   :-: savetrees
Used :-:
*/
class MyStack {
public:
    queue<int> s1, s2;
    MyStack() {}
    void push(int x) {
        s2.push(x);
        while (!s1.empty()) s2.push(s1.front()), s1.pop();
        swap(s1, s2);}
    int pop() {
        if (s1.empty()) return -1;
        int temp = s1.front();
        s1.pop();
        return temp;}
    int top() {return s1.empty() ? -1 : s1.front();}
    bool empty(){return s1.empty();}};
