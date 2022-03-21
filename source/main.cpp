#include <iostream>
#include <thread>
#include <chrono>

#include <zmq.hpp>
#include <zmq_addon.hpp>   

static zmq::context_t ctx;
//
//using namespace std::chrono_literals;
//auto clean = []() {
//    zmq::socket_t sock0(ctx, zmq::socket_type::pull);
//    zmq::socket_t sock1(ctx, zmq::socket_type::pull);
//
//    sock0.connect("tcp://127.0.0.1:5555");
//    sock1.connect("tcp://127.0.0.1:5556");
//
//    zmq::pollitem_t items[] = {
//        {sock0, 0, ZMQ_POLLIN, 0},
//        {sock1, 0, ZMQ_POLLIN, 0},
//    };
//
//    while (true) {
//        int rc = zmq::poll(items, 2, -1);
//
//        if (items[0].revents) {
//            zmq::message_t z_in0;
//            auto rc0 = sock0.recv(z_in0);
//            std::cout << '\n' << z_in0.to_string_view();
//        }
//
//        if (items[1].revents) {
//            zmq::message_t z_in1;
//            auto rc1 = sock1.recv(z_in1);
//            std::cout << '\n' << z_in1.to_string_view();
//        }
//
//    }
//};

int main()
{
    int major, minor, patch;
    

    /*std::thread th0 = std::thread(clean);
    th0.join();*/
}