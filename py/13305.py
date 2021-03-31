N = int(input())

dist = [int(i) for i in input().split()]
price = [int(i) for i in input().split()]

min_price = price[0]
total_price = 0

for i in range(N-1):
    if min_price > price[i]:
        min_price = price[i]
    total_price += min_price * dist[i]
    
print(total_price)
