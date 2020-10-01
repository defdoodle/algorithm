import copy

global ans
ans = []

def Combination(inp, out, start) :
    if len(out) == 7 :
        if sum(out) == 100 :
            global ans
            out1 = copy.deepcopy(out)
            ans.append(out1) 
            return        
        else : 
            return
    
    if out == [] :
        start = 0

    for i in range(start,len(inp)) :
        out.append(inp[i])
        Combination(inp,out, i + 1)
        out.pop()


inp = []
for i in range(9) :
    a = int(input())
    inp.append(a)

out = []
Combination(inp, out, 0)

ans[0].sort()

for j in ans[0] :
    print(j)








