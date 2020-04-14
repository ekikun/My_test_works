import numpy


def u(ary1, ub):
    print(ary1)
    print(ary1.__len__())
    std = numpy.std(ary1)
    average = numpy.average(ary1)
    ua = std/numpy.sqrt(ary1.__len__())
    U = numpy.sqrt(float(ua)**2+float(ub)**2)
    return {
        '平均数': f'{average}',
        '标准差': f'{std}',
        'Ua': f'{ua}',
        'Ub': f'{ub}',
        'U': f'{U}'
    }


if __name__ == '__main__':
    print('输入数据数目：')
    n = int(input())
    print('输入\n')
    arys = input().split(' ')
    arys = [float(i) for i in arys]
    print('输入Ub!:')
    ub = input()
    print(u(arys, ub))




