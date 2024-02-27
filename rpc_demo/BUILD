cc_binary(
    name = 'greeting',
    srcs = 'greeting.cc',
    deps = [
        '//common/net/http/server:http_server',
        '//common/net/uri:uri',
    ],
)

proto_library(
    name = 'echo_service_proto',
    srcs = 'echo_service.proto'
)

cc_library(
    name = 'echo_service_impl',
    hdrs = 'echo_service_impl.h',
    srcs = 'echo_service_impl.cc',
    deps = ':echo_service_proto',
)

cc_binary(
    name = 'echo_server',
    srcs = 'echo_server.cc',
    deps = [
        ':echo_service_impl',
        '//common/rpc:rpc',
    ],
)

cc_binary(
    name = 'echo_client',
    srcs = 'echo_client.cc',
    deps = [
        ':echo_service_proto',
        '//common/rpc:rpc',
    ],
)
