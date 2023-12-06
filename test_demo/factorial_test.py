import unittest

from test_demo.factorial import factorial


class FactorialTest(unittest.TestCase):

    def test_handles_zero_input(self):
        self.assertEqual(factorial(0), 1)
    
    def test_handles_positive_input(self):
        self.assertEqual(factorial(1), 1)
        self.assertEqual(factorial(2), 2)
        self.assertEqual(factorial(3), 6)
        self.assertEqual(factorial(8), 40320)


if __name__ == '__main__':
    unittest.main()
