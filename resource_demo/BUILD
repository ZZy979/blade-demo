resource_library(
    name = 'foo',
    srcs = ['a.txt', 'b.txt'],
)

cc_binary(
    name = 'test',
    srcs = 'test.cc',
    deps = ':foo',
)
