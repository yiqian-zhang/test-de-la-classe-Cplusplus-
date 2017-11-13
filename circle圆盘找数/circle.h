#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
    private:
        int num[20];
        int Max[4];
        int Min[4];
        int sum_max;
        int sum_min;
    public:
        Circle();
        void FindMax_Min();
        void Show();
    };    
#endif

