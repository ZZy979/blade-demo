#include "rpc_demo/echo_service_impl.h"

void EchoServiceImpl::Echo(
        google::protobuf::RpcController* controller,
        const EchoRequest* request,
        EchoResponse* response,
        google::protobuf::Closure* done) {
    response->set_body(request->body());
    done->Run();
}
