def fun1(num):
    def funt1():
        print("Hey guys")
        num()
        print("im TERENCE")
    return funt1


def fun2():
    print("youre welcome")


fun2 = fun1(fun2)

fun2()
