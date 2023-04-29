x1, y1, z1 = map(float, input().split())
x2, y2, z2 = map(float, input().split())

distance = ((x2 - x1)**2 + (y2 - y1)**2 + (z2 - z1)**2)**(1/2)

print(f'{distance:.11f}')
