def gcd(m,n):
	if(n==0):
		return m
	else:
		return gcd(n,m%n)				
cn = int(raw_input())
while(cn!=0):
	cn = cn - 1 
	x  = raw_input()
	if x.find(".")== - 1 :
		print 1
		continue
	else : 
		o = x.find('.')
		m = int(x[o+1:])
		d = int('1' + (x[0:o]) + str(m))
		l = len(x[o+1:])
		m = 10**l
		r = m/gcd(m,d) 
		print r
