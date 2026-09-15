java_library(
    name = 'ResourceReader',
    srcs = 'ResourceReader.java',
    resources = [
        'data/foo.txt',
        '//package_demo/conf/hello_world.conf',
        ('//custom_rule_demo/a.txt', 'data/a.txt'),
    ],
)

java_test(
    name = 'ResourceReaderTest',
    srcs = 'ResourceReaderTest.java',
    deps = [
        ':ResourceReader',
        '//thirdparty/junit:junit4',
    ],
)
