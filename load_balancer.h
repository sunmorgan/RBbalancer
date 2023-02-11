#ifndef LOAD_BALANCER_H
#define LOAD_BALANCER_H

#include <vector>
#include <cstdlib>
#include <ctime>

class LoadBalancer
{
public:
    LoadBalancer(int n);
    int getNextServer();

private:
    std::vector<int> servers_;
    int curr_;
};

#endif