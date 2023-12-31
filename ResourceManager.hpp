#pragma once
#include <iostream>
#include "Resource.hpp"
using namespace std;

class ResourceManager
{
    public:
    ResourceManager() :adress{new Resource} {}

    ResourceManager(const ResourceManager& kop) {
        adress = new Resource();
        *adress=*(kop.adress);
    }

    ResourceManager  operator=(const ResourceManager& kop) {
        *adress=*(kop.adress);
        return *this;
    }

    ~ResourceManager() {
        delete adress; 
    }
    double get() {
        return adress->get();
    }

    Resource* adress;
};
