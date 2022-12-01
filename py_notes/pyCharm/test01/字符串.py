# from math import pi
# from math import e
#
# a = "Hello, %s %s!"
# b = ('world', '!!')
# print(a % b)
# print("{1}{2}{2}{1}{0}".format(" a", " b", " c"))  # {}里的数字是索引
# print("{},{} and {}".format("1", "2", "3"))
# print("{name} is approximately {value:.2f}".format(value=pi, name='PI'))
# print(f"Euler's constant is roughly {e}")
# import math
# tmpl = 'The {mod.__name__} module defiens the value {mod.pi} for PI'
# print(tmpl.format(mod=math))
import string

# print("{pi!s} {pi!r} {pi!a}".format(pi='\u03c0'))
# print('{num:#g} '.format(num=123))
# print('{num:g} '.format(num=123))
# print('{num:#b} '.format(num=123))
# print('{num:b} '.format(num=123))
# print("Hello world!".center(40))
#
# s = "Hello world!"
# print(s.find('world'))
# print(s[s.find('o'):])
# print(s.find('ll', 1, 10))  # 起点和终点
#
# seq = ['1', '2', '3', '4']
# sep = '+'
# print(sep.join(seq))
# print(seq)
#
# print("hello world".title())
# print("NAME IS ".lower())
s = "Hello abc!"
print(repr(s.replace("abc", "world")))
print(repr(s))

print('1+2+3+4'.split('+'))

table = str.maketrans('cs', 'kz')  # maketrans方法可以加第三个参数，指定要删除的字母
print(type(table))
print(table)
s = 'this is an incredible test.'
print(s)
print(s.translate(table))
