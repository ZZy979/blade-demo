package(
    name = 'hello_world_package',
    type = 'tar',
    shell = True,
    srcs = [
        ('$(location //quick-start:hello_world)', 'bin/hello_world'),
        ('$(location //quick-start:hello)', 'lib/libhello.a'),
        ('conf', 'conf'),
        ('data.txt', 'data/foo.txt'),
    ]
)
