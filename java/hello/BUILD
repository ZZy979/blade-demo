java_library(
    name = 'Say',
    srcs = 'Say.java',
)

java_library(
    name = 'Hello',
    srcs = 'Hello.java',
    deps = ':Say',
)

# 方法1
java_binary(
    name = 'HelloWorld',
    srcs = 'HelloWorld.java',
    deps = ':Hello',
    main_class = 'hello.HelloWorld',
)

# 方法2
java_fat_library(
    name = 'HelloWorldFat',
    srcs = 'HelloWorld.java',
    deps = ':Hello',
)
