import time
def extract(remainder):
	power = (((4000000007 - 1) / 2 - 1) / 2);
	seconds = pow(remainder,power+1,4000000007)
	if seconds > 4000000007/2:
		return 4000000007 - seconds
	return seconds

remainder = int(raw_input())
timestamp = extract(remainder)
print(time.asctime(time.gmtime(timestamp)))