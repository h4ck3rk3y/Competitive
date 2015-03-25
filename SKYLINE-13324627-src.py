MOD = 1000000
f = []
f.append(1)
for x in xrange(1,1001):
	 f.append(((f[x-1])*((4*x-2))/((x+1))))		
t = int(raw_input())
while(t!=0):
	print f[t]%MOD
	t = int(raw_input())

				
