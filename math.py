#!/usr/bin/env python
#encoding:utf-8
#author: Song Bo
def perm(n, m):
	"""return a list of all the permutations of A^n_m
	   n and m should be less than 7 due to the calculation efficiency.
		"""
	if m == 1:
		return [[x] for x in xrange(1, n + 1)]
	elif n == m:		
		return [x[0: i] + [m] + x[i: ] for x in perm(n - 1, m - 1) for i in xrange(len(x) + 1)]
	else:
		return perm(n, m - 1) + [x[0: i] + [m] + x[i: ] for x in perm(n - 1, m - 1) for i in xrange(len(x) + 1)]
