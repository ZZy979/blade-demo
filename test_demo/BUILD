cc_library(
    name = 'factorial',
    srcs = 'factorial.cc',
    hdrs = 'factorial.h',
)

cc_test(
    name = 'factorial_test',
    srcs = 'factorial_test.cc',
    deps = ':factorial',
)

java_library(
    name = 'FactorialJava',
    srcs = 'Factorial.java',
)

java_test(
    name = 'FactorialJavaTest',
    srcs = 'FactorialTest.java',
    deps = [
        ':FactorialJava',
        '//thirdparty/junit:junit4',
    ],
)

scala_library(
    name = 'FactorialScala',
    srcs = 'Factorial.scala',
)

scala_test(
    name = 'FactorialScalaTest',
    srcs = 'FactorialTest.scala',
    deps = ':FactorialScala',
)

py_library(
    name = 'factorial_py',
    srcs = 'factorial.py',
)

py_test(
    name = 'factorial_py_test',
    srcs = 'factorial_test.py',
    deps = ':factorial_py',
)
