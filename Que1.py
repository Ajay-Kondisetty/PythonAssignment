x=3
if x<4:
    try:
        y=x/(x-3)
        print(y)
    except ZeroDivisionError as e:
        print(e)
