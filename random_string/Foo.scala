import org.apache.commons.lang3.RandomStringUtils

object Foo {
    def randomString(): String = RandomStringUtils.random(10, "abcdefg")
}
