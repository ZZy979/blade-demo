import org.apache.commons.lang3.RandomStringUtils

object RandomStringGenerator {
  def generate(length: Int): String = {
    RandomStringUtils.random(length, "abcdefghijklmnopqrstuvwxzy")
  }
}
