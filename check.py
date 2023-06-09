x1 = []
x2 = []

with open("matrix.txt", "r") as f:
	curr = x1
	arr = []
	for line in f:
		if line.strip() == "X1":
			curr = x1
		elif line.strip() == "X2":
			curr = x2
		else:
			arr.append(int(line.strip()))
			print(curr)
			if len(arr) == 4:
				curr.append(arr)
				arr = []

res = [[0 for _ in range(4)] for _ in range(4)]

for i in range(4):
	for j in range(4):
		for k in range(4):
			res[i][j] += x2[i][k] * x1[k][j]

print("x1")
for row in x1:
	print(row)

print("x2")
for row in x2:
	print(row)

print("res")
for row in res:
	print(row)
