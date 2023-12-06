package com.example.scala

import org.scalatest.funsuite.AnyFunSuite

class FactorialTest extends AnyFunSuite {
  test("handlesZeroInput") {
    assertResult(1)(Factorial.factorial(0))
  }

  test("handlesPositiveInput") {
    assertResult(1)(Factorial.factorial(1))
    assertResult(2)(Factorial.factorial(2))
    assertResult(6)(Factorial.factorial(3))
    assertResult(40320)(Factorial.factorial(8))
  }
}
