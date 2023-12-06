cc_library(
    name = 'say',
    hdrs = 'say.h',
    srcs = 'say.cc',
)

cc_library(
    name = 'hello',
    hdrs = 'hello.h',
    srcs = 'hello.cc',
    deps = ':say',
)

cc_binary(
    name = 'hello_world',
    srcs = 'hello_world.cc',
    deps = ':hello',
)
