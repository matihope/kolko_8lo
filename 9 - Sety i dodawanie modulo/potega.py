import math

testcase = int(input(':'))
testcase = math.factorial(testcase)
print(testcase % (1e9+7))
