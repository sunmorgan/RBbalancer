#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
    Server(int id) : id_(id) {}
    int getId() const { return id_; }

private:
    int id_;
};

#endif