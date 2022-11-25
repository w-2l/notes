# print(b"hello")
# x = bytearray(b'hello')
# x[1] = ord(b'u')
# print(x)
# 序列索引
# greeting = 'hello'
# print(greeting[0])
# # 只调用用户输入的第四位
# year = input('Year:')[3]
# print(year)
# date_name = ['st', 'nd', 'rd'] + 17 * ['th'] + ['st', 'nd', 'rd'] + 7 * ['th'] + ['st']
# month_name = ['January',
#               'February',
#               'March',
#               'April',
#               'May',
#               'July',
#               'June',
#               'August',
#               'September',
#               'October',
#               'November',
#               'December']
# year = input('Year:')
# month = int(input('Month:'))
# date = int(input('Date:'))
# print(f'{month_name[month - 1]} {date}{date_name[date - 1]}, {year}')
# tag = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
# print(tag[1:5])
# print(tag[4:-1])
# print(tag[4:])
# print(tag[:4])
# tag = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
# print(tag[:3:-1])
# print(tag[:5:4])
# print(tag[:5:-3])
# 成员资格测试  in
# p = 'rw'
# print('w' in p)
# tag = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
# print(max(tag))
# print(min(tag))
# print(len(tag))
# print(type(tag))
# print(max(1, 2, 3, 33))
# print(min(0, 2, 6, -9))

# print(''.join(['H', 'e', 'l', 'l', 'o']))
# names = list('Parl')
# print(names)
# names[2:] = list('ab')
# print(names)
# del names[2:]
# print(names)
n = tuple([1, 2, 3, 4, 5, 6, 7])
print(f'n={n}')
print(f'n.index(3)={n.index(3)}')
print(f'n.count(2)={n.count(2)}')
print(n[::-1])
