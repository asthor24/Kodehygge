n = int(input())
people = []
for i in range(n):
    name, like, date = input().split()
    people.append((name, like, date))

dates = dict()
for (name, like, date) in people:
    if date not in dates:
        dates[date] = []
    dates[date].append((int(like), name))

answer = []
for date in dates:
    current_date = dates[date]
    current_date.sort()
    answer.append(current_date[len(current_date) - 1][1])

answer.sort()
print(len(answer))
for person in answer:
    print(person)