import collections
def most_frequent():
    inp='Mississippi'
    dic={}
    for i in inp:
        dic[i]=inp.count(i)
    ctr=collections.Counter(inp)
    print(ctr)    
most_frequent()
