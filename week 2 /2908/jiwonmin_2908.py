n, m = map(str, input().split())
n_reverse = n[::-1]
m_reverse = m[::-1]

if int(n_reverse) >= int(m_reverse):
  print(n_reverse)
else:
  print(m_reverse)
