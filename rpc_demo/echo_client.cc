#include <iostream>
#include <string>

#include "common/rpc/rpc_channel.h"
#include "common/rpc/rpc_client.h"
#include "common/rpc/rpc_controller.h"
#include "rpc_demo/echo_service.pb.h"


int main(int argc, char* argv[]) {
    google::ParseCommandLineFlags(&argc, &argv, true);
    google::InitGoogleLogging(argv[0]);

    gdt::RpcClient client;
    gdt::RpcChannel channel;
    client.GetChannel("http://9.134.208.208:8080", &channel);
    EchoService::Stub stub(&channel);

    std::string msg;
    while (std::cin >> msg) {
        gdt::RpcController controller;
        EchoRequest request;
        EchoResponse response;
        request.set_body(msg);
        stub.Echo(&controller, &request, &response, nullptr);
        std::cout << response.body() << std::endl;
    }

    client.QuickStop();
    return 0;
}
