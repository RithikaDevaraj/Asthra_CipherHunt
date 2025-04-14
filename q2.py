def fibonacci(n):
    fib = [0, 1]
    for i in range(2, n):
        fib.append(fib[i - 2] + fib[i - 1])
    return fib


n = 8
print("Fibonacci sequence:", fibonacci(n))
