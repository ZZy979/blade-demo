
scala_library(
    name = 'RandomStringGenerator',
    srcs = 'RandomStringGenerator.scala',
    deps = '//thirdparty/java:commons-lang3',
)

scala_fat_library(
    name = 'Test',
    srcs = 'Test.scala',
    deps = ':RandomStringGenerator',
)
