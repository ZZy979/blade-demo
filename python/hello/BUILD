py_library(
    name = 'say',
    srcs = 'say.py',
)

py_library(
    name = 'hello',
    srcs = 'hello.py',
    deps = ':say',
)

py_binary(
    name = 'hello_world',
    srcs = 'hello_world.py',
    deps = ':hello',
)
