#include <iostream>

using namespace std;

class Box
{
    // 属性
private:
    int _len;
    int _width;
    int _height;

    int _surface;
    int _volume;

public:
    bool setLen(int len);
    bool setWidth(int width);
    bool setHeight(int height);

    int getLen();
    int getWidth();
    int getHeight();

    int getVolume();
    int getSurface();
};
bool Box::setLen(int len)
{
    if (len <= 0 || len >= 100)
    {
        cout << "len error" << endl;
        return false;
    }
    _len = len;
    return true;
}
bool Box::setWidth(int width)
{
    if (width <= 0 || width >= 100)
    {
        cout << "width error" << endl;
        return false;
    }
    _width = width;
    return true;
}
bool Box::setHeight(int height)
{
    if (height <= 0 || height >= 100)
    {
        cout << "height error" << endl;
        return false;
    }
    _height = height;
    return true;
}
int Box::getLen()
{
    return _len;
}
int Box::getWidth()
{
    return _width;
}
int Box::getHeight()
{
    return _height;
}
int Box::getSurface()
{
    return _len *_width;
}
int Box::getVolume()
{
    return getSurface() * _height;
}
int main()
{

    return 0;
}
