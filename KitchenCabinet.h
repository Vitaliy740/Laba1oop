#ifndef KITCHENCABINET_H
#define KITCHENCABINET_H
#include <iostream>

class KitchenCabinet
{
private:
    std::string m_material;
    double m_xsize;
    double m_ysize;
    double m_zsize;
    double m_xpos;
    double m_ypos;
    double m_zpos;

public:
    KitchenCabinet()=default;
    KitchenCabinet(std::string material, double xsize, double ysize,double zsize,double xcoor, double ycoor,double zcoor);
    KitchenCabinet(const KitchenCabinet& copy);
    ~KitchenCabinet()=default;
    void setMaterial(const std::string& material);
    void setXsize(double xsize);
    void setYsize(double ysize);
    void setZsize(double zsize);
    void setXcoordinate(double xcoor);
    void setYcoordinate(double ycoor);
    void setZcoordinate(double ycoor);
    std::string getMaterial() const {return m_material;}
    double getXsize() const {return m_xsize;}
    double getYsize() const {return m_ysize;}
    double getZsize() const {return m_zsize;}
    double getXcoordinate() const {return m_xpos;}
    double getYcoordinate() const {return m_ypos;}
    double getZcoordinate() const {return m_zpos;}
};

#endif // KITCHENCABINET_H
