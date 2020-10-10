#include <QCoreApplication>
#include <iostream>
#include <string>
#include <windows.h>
#include <assert.h>
#include "KitchenCabinet.h"

const double MIN = 0.0000000001;
void checkKC(KitchenCabinet sample, std::string material, double xsize,double ysize, double zsize, double xcoor, double ycoor, double zcoor){
    assert(sample.getMaterial()==material);
    assert(abs(sample.getXsize()-xsize)<MIN);
    assert(abs(sample.getYsize()-ysize)<MIN);
    assert(abs(sample.getZsize()-zsize)<MIN);
    assert(abs(sample.getXcoordinate()-xcoor)<MIN);
    assert(abs(sample.getYcoordinate()-ycoor)<MIN);
    assert(abs(sample.getZcoordinate()-zcoor)<MIN);
    assert(sample.getXsize()>0);
    assert(sample.getYsize()>0);
    assert(sample.getZsize()>0);
    assert(sample.getXcoordinate()>=0);
    assert(sample.getYcoordinate()>=0);
    assert(sample.getZcoordinate()>=0);
}
void changeKC(KitchenCabinet& sample, std::string material, double xsize,double ysize, double zsize, double xcoor, double ycoor, double zcoor){
    sample.setMaterial(material);
    sample.setXsize(xsize);
    sample.setYsize(ysize);
    sample.setZsize(zsize);
    sample.setXcoordinate(xcoor);
    sample.setYcoordinate(ycoor);
    sample.setZcoordinate(zcoor);
}
int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string material;
    KitchenCabinet example1("wood",10,20,27,9,9,9);
    changeKC(example1,"wood",11,13,4,18,13,15);
    checkKC(example1,"wood",10,2,3,9,9,9);
    KitchenCabinet example2("wood",10,20,27,9,9,9);
    changeKC(example2,"wood",30,0,15,33,43,45);
    checkKC(example2,"wood",30,1,15,33,43,45);
    KitchenCabinet example3("wood",9,13,47,9,9,9);
    changeKC(example3,"wood",13,23,-95,22,34,34);
    checkKC(example3,"wood",13,23,27,9,9,9);
    KitchenCabinet example4("wood",10,20,27,9,9,9);
    changeKC(example4,"wood",10,3,4,-8,3,5);
    checkKC(example4,"wood",10,20,27,0,9,9);
    KitchenCabinet example5("wood",10,20,27,9,9,9);
    changeKC(example5,"wood",30,1,4,8,-8,5);
    checkKC(example5,"wood",10,20,27,9,0,9);
    KitchenCabinet example6("wood",10,20,27,9,9,9);
    changeKC(example6,"wood",30,1,4,8,88,-5);
    checkKC(example6,"wood",10,20,27,9,5,0);
    std::cout<<"This is actualy works"<<std::endl;
    return 0;
}
