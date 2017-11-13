#ifndef AREA_H
#define AREA_H
class AreaClass{
    public:
        AreaClass(double x=0,double y=0):height(x),width(y){}
    protected:
        double height,width;
};
class Box:public AreaClass{
    public:
        Box(double x,double y):AreaClass(x,y){}
        double Area(){return height*width;}
        
};
class Isosceles:public AreaClass{
    public:
        Isosceles(double x,double y):AreaClass(x,y){}
        double Area(){return height*width*0.5;}
}; 
#endif
                
