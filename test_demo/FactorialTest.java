package com.example.java;

import org.junit.Test;

import static org.junit.Assert.*;

public class FactorialTest {

    @Test
    public void handlesZeroInput() {
        assertEquals(1, Factorial.factorial(0));
    }

    @Test
    public void handlesPositiveInput() {
        assertEquals(1, Factorial.factorial(1));
        assertEquals(2, Factorial.factorial(2));
        assertEquals(6, Factorial.factorial(3));
        assertEquals(40320, Factorial.factorial(8));
    }

}
