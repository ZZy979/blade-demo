package hello

object Hello {
  def hello(to: String): Unit = Say.say("Hello, " + to)
}
