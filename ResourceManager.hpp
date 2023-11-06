#pragma once
#include <iostream>
#include "Resource.hpp"
using namespace std;

class ResourceManager
{
    public:
    ResourceManager() :adress{new Resource} {}

    ResourceManager(const ResourceManager& kop) = default;


    ~ResourceManager() {
        delete adress; 
    }
    double get() {
        return adress->get();
    }

    Resource* adress;
};
