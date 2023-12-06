java_library(
    name = 'Say',
    srcs = 'Say.java',
)

java_library(
    name = 'Hello',
    srcs = 'Hello.java',
    deps = ':Say',
)

java_binary(
    name = 'HelloWorld',
    srcs = 'HelloWorld.java',
    deps = ':Hello',
    main_class = 'hello.HelloWorld',
)

java_fat_library(
    name = 'HelloWorldFat',
    srcs = 'HelloWorld.java',
    deps = ':Hello',
)
