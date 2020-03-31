# Девочка пошла в магазин. У нее с собой n денег (n
# вводится с клавиатуры). Если она сможет купить на них
# 3 кг яблок по 100 сум И 5 кг груш по 300 сум, то вывести
# на экран количество денег, которые у нее остались.
# Иначе (если не хватит денег) вывести соответствующее
# сообщение.


money=int(input('How mony have girl? '))
sum = 3 * 100 + 5 * 300

if(money > sum):
    print('She can buy apple and pears. And have',money-sum,'sum')
elif(money==sum):
    print('She can buy apple and pears. But She don`t have mony')
else:
    print('She can`t buy apple and pears. Becouse She don`t enjoy ',sum-money)