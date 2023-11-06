#pragma once
#include <iostream>
#include "Resource.hpp"
using namespace std;

class ResourceManager
{
    public:
    ResourceManager():adress=new Resource; {
        
    }
    ~ResourceManager() {
        delete adress; 
    }
    double get() {
        return resource->get();
    }
    private:
    Resource* adress;
};
