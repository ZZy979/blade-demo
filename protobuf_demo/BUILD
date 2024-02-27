proto_library(
    name = 'test_proto',
    srcs = 'test.proto',
)

cc_binary(
    name = 'test',
    srcs = 'test.cc',
    deps = [
      ':test_proto',
    ],
)
