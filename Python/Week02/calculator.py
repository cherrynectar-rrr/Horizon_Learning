def add(a,b):
    return a + b
def sub(a,b):
    return a - b
def mul(a,b):
    return a * b
def div(a,b):
    if b==0:
        return None
    else:
        return round(a / b, 2)
# print(__name__)
if __name__ == "__main__" :
    print("我是自己运行的")