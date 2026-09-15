resource_library(
    name = 'my_resource',
    srcs = ['a.txt', 'b.txt'],
)

cc_binary(
    name = 'test',
    srcs = 'test.cc',
    deps = ':my_resource',
)
