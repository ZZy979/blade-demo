maven_jar(
  name = 'commons-lang3',
  id = 'org.apache.commons:commons-lang3:3.12.0',
)

scala_library(
  name = 'foo',
  srcs = 'Foo.scala',
  deps = ':commons-lang3',
)

scala_fat_library(
  name = 'main',
  srcs = 'Main.scala',
  deps = ':foo',
)
