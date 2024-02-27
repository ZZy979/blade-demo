#include "common/rpc/rpc_server.h"
#include "rpc_demo/echo_service_impl.h"

int main(int argc, char* argv[]) {
    google::ParseCommandLineFlags(&argc, &argv, true);
    google::InitGoogleLogging(argv[0]);

    EchoServiceImpl service;
    gdt::RpcServer server;
    server.RegisterService(&service);
    server.Listen("9.134.208.208", 8080);
    server.Start();
    server.WaitForStop();
    return 0;
}
