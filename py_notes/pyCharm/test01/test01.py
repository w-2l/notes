# a = 10
# print(type(a))
# b = 9.99
# print(type(b))
# c = True
# print(type(c))
# d = 'hello'
# print(type(d), end='')
# # isinstance（，）判断是否为某种类型，是返回True
# print(isinstance(d, str))
# '''
# 格式化输出
# %d %s %f
# '''
# name = '刘备'
# age = 23
# number = 1
# print('name:%s age:%d number:%05d' % (name, age, number))
# '''
# format格式化输出
# 无需%
# '''
# name = '孙悟空'
# mobile = 123456
# print(f'name:{name}\nmobile:{mobile}')
#
# name = '刘备'
# age = 23.2
# number = 1
# print(f'name:{name}\nage:{age:.1f}\nnumber:{number:05d}')
n = input('Enter digital:')
print(f'your number is {n}')
