#include "KitchenCabinet.h"
#include <iostream>
KitchenCabinet::KitchenCabinet(std::string material, double xsize, double ysize,double zsize,double xcoor, double ycoor,double zcoor)
{
    if(material.length()<1)
        this->m_material="Unknown";
    else
        this->m_material=material;
    if(xsize<=0)
        this->m_xsize=1;
    else
        this->m_xsize=xsize;
    if(ysize<=0)
        this->m_ysize=1;
    else
        this->m_ysize=ysize;
    if(zsize<=0)
        this->m_zsize=1;
    else
        this->m_zsize=zsize;
    if(xcoor<0)
        this->m_xpos=0;
    else
        this->m_xpos=xcoor;
    if(ycoor<0)
        this->m_ypos=0;
    else
        this->m_ypos=ycoor;
    if(zcoor<0)
        this->m_zpos=0;
    else
        this->m_zpos=zcoor;
}
KitchenCabinet::KitchenCabinet(const KitchenCabinet& copy){
    this->m_material=copy.getMaterial();
    this->m_xsize=copy.getXsize();
    this->m_ysize=copy.getYsize();
    this->m_zsize=copy.getZsize();
    this->m_xpos=copy.getXcoordinate();
    this->m_ypos=copy.getYcoordinate();
    this->m_zpos=copy.getZcoordinate();
}
void KitchenCabinet::setMaterial(const std::string& material){
    this->m_material=material;
}
void KitchenCabinet::setXsize(double xsize){
    if(xsize<=0)
        this->m_xsize=1;
    else
        this->m_xsize=xsize;
}
void KitchenCabinet::setYsize(double ysize){
    if(ysize<=0)
        this->m_ysize=1;
    else
        this->m_ysize=ysize;
}
void KitchenCabinet::setZsize(double zsize){
    if(zsize<=0)
        this->m_zsize=1;
    else
        this->m_zsize=zsize;
}
void KitchenCabinet::setXcoordinate(double xcoor){
    if(xcoor<0)
        this->m_xpos=0;
    else
        this->m_xpos=xcoor;
}
void KitchenCabinet::setYcoordinate(double ycoor){
    if(ycoor<0)
        this->m_ypos=0;
    else
        this->m_ypos=ycoor;
}
void KitchenCabinet::setZcoordinate(double zcoor){
    if(zcoor<0)
        this->m_zsize=0;
    else
        this->m_zpos=zcoor;
}
