things = ['This', 'is', 'a', 'list']
thing_to_find = 'is'
found = False

for string in things:
    if string == thing_to_find:
        found = True
        break
print(found)
