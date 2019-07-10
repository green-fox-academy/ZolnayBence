#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int num0);
    void add(int num);
    int get();
    void reset();

private:
    int num0_;

};


#endif //COUNTER_COUNTER_H
