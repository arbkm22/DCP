def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(pair):
    def return_first(a, b):
        return a
    return pair(return_first)

def cdr(pair):
    def return_second(a, b):
        return b
    return pair(return_second)

# pr = cons(5, 10)
# pr(print)
# print(car(pr))
# print(cdr(pr))