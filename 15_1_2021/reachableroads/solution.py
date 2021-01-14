import heapq

n = int(input())

def dfs_visit(node, visited, adj):
    visited[node] = True
    for neighbour in adj[node]:
        if not visited[neighbour]:
            dfs_visit(neighbour, visited, adj)

# will return the number of connected components
def dfs(m, adj):
    visited = [False for i in range(m)]
    cnt = 0
    for i in range(m):
        if not visited[i]:
            dfs_visit(i, visited, adj)
            cnt += 1
    return cnt

for _ in range(n):
    m = int(input())
    r = int(input())
    adj = [[] for i in range(m)]
    for i in range(r):
        u,v = map(int,input().split())
        adj[u].append(v)
        adj[v].append(u)
    components = dfs(m, adj)
    print(components - 1)
