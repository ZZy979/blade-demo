scala_library(
    name = 'Say',
    srcs = 'Say.scala',
)

scala_library(
    name = 'Hello',
    srcs = 'Hello.scala',
    deps = ':Say',
)

scala_fat_library(
    name = 'HelloWorldFat',
    srcs = 'HelloWorld.scala',
    deps = ':Hello',
)
