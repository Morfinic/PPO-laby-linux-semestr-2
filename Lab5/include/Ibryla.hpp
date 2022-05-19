#pragma once

class Ibryla
{
    public:
        virtual ~Ibryla() {};
        virtual void dataEnter() = 0;
        virtual void printEdgeLength() = 0;
        virtual double calculateArea() = 0;
        virtual double calculateVolume() = 0;
        virtual void printData() = 0;
};
