def process_map(arr):
	tri = sorted(arr,key= lambda x: x[2], reverse=True)
	maxsum = -1
	for  num_1 in xrange(0,len(tri)):
		for num_2 in xrange(num_1+1,len(tri)):
			if ((tri[num_1][1]  < tri[num_2][0]) or (tri[num_2][1] < tri[num_1][0])):
				cursum = tri[num_1][2] + tri[num_2][2]
				if cursum> maxsum:
					maxsum = cursum
				break
	print maxsum

def xorred(list):
	output = 0
	for i in list:
		output = output ^ i
	return output

def runThrough(list):
	arr = []
	for i in xrange(0,len(list)):
		for j in xrange(i+1,len(list)+1):
			arr.append((i+1,j,xorred(list[i:j])))

	process_map(arr)


while True:
	n = int(raw_input(""))
	list = []
	i = 0
	while i!=n:
		temp = int(raw_input(""))
		list.append(temp)
		i = i + 1
	runThrough(list)
