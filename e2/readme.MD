
for test perfoamnce run this with -std because auto not longer supportted with c++20 else you can get warnings:
    g++ -std=c++17 fib_performance_compare.cpp -o fib_perf && ./fib_perf