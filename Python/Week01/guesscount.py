secret = 66
guess = int(input("请输入一个数字："))
while guess != secret:
    if guess > secret:
        print("猜大了！")
    elif guess < secret:
        print("猜小了！")
    guess = int(input("再试一次吧："))
print("恭喜你！猜对了！！")

