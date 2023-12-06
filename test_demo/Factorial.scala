package com.example.scala

object Factorial {
  def factorial(n: Int): Long = if (n == 0) 1 else n * factorial(n - 1)
}
