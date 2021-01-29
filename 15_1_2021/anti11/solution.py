MOD = int(1e9 + 7)
dp = [1, 2]
for i in range(2, 10001):
    dp.append((dp[i - 1] + dp[i - 2]) % MOD)

t = int(input())
for _ in range(t):
    n = int(input())
    print(dp[n])
