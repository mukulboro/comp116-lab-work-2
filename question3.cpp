#include"pointClass.cpp"
#include<cmath>
#include<iostream>

class Rectangle{
    private:
        Point point1, point2, arkoPoint1, arkoPoint2;
        float dimensions[2];

        float getDistance(Point p1, Point p2){
            return sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2));
        }
    public:
        void setPoints(Point userPoint1, Point userPoint2){
            point1.x = userPoint1.x;
            point1.y = userPoint1.y;
            point2.x = userPoint2.x;
            point2.y = userPoint2.y;
            arkoPoint1.x = userPoint2.x;
            arkoPoint1.y = userPoint1.y;
            arkoPoint2.x = userPoint1.x;
            arkoPoint2.y = userPoint2.y;
        }

        float* getDimensions(){
            dimensions[0] = getDistance(point1, arkoPoint1); //LENGTH
            dimensions[1] = getDistance(point1, arkoPoint2); //BREADTH
        }

        double perimeter(){
            return 2*(dimensions[0]+dimensions[1]);
        }
};

int main(){
    Rectangle rect;
    Point up1, up2;
    float *dimensions;
    up1.x = 5;
    up1.y = 10;
    up2.x = 10;
    up2.y = 5;

    rect.setPoints(up1, up2);

    dimensions = rect.getDimensions();

    std::cout<<"LENGTH:"<<dimensions[0]<<std::endl;
    std::cout<<"BREADTH:"<<dimensions[1]<<std::endl;
    std::cout<<"PERIMETER:"<<rect.perimeter()<<std::endl;
    return 0;
}