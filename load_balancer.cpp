#include "load_balancer.h"

LoadBalancer::LoadBalancer(int n) : curr_(0)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        servers_.push_back(i);
    }
}

int LoadBalancer::getNextServer()
{
    int serverId = servers_[curr_];
    curr_ = (curr_ + 1) % servers_.size();
    return serverId;
}