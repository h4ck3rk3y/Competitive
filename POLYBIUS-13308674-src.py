codes = []
def polybius(word):
	for character in word:
		code = ''
		if character in('A','B','C','D','E'):
			code = code + '1'
		elif character in('F','G','H','I','J','K'):
			code = code + '2'
		elif character in('L','M','N','O','P'):
			code = code + '3'
		elif character in('Q','R','S','T','U' ):
			code = code + '4'
		else:			
			code = code + '5'
		if character in('A','F','L','Q','V'):
			code = code + '1'
		elif character in('B','G','M','R','W'):
			code = code + '2'
		elif character in('C','H','N','S','X'):
			code = code + '3'
		elif character in('D','I','J','O','T','Y'):
			code = code + '4'
		else :
			code = code + '5'			
		codes.append(code)						

t = int(raw_input())
for x in xrange(t):
	sentence = raw_input()
	words = sentence.split()
	codes = []
	for word in words:
		polybius(word)	
	for code in codes:
		print code,
	print	
