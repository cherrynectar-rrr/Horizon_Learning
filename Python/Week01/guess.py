import random
print("欢迎来到猜数字游戏！试着把这个数字猜出来")
secret = random.randint(1,100)
count = 1
guess = int(input("请输入一个数字："))
while guess != secret:
    if guess > secret:
        print("太大了！")
    elif guess < secret:
        print("太小了！")
    count += 1
    guess = int(input("再试一次吧："))
print(f"恭喜你猜对了！你一共用了{count}次！")