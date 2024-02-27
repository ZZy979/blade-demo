#include "rpc_demo/echo_service.pb.h"

class EchoServiceImpl : public EchoService {
public:
    void Echo(
            google::protobuf::RpcController* controller,
            const EchoRequest* request,
            EchoResponse* response,
            google::protobuf::Closure* done) override;
};
