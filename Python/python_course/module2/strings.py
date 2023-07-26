# escape strings
# \'
# \"
# \\
# \n -> it is use to put after characters in next line
course = "Python \nprogramming"
print(course)
print(len(course))
print(course[0])
print(course[-1])
print(course[0:3])
print(course[0:])
print(course[:3])
print(course[:])

message = """hello 
my name is Tanish and I am learning python
jkxbvkb """
print(message)

first = "Tanish"
last = "Sharma"
full = f"{first} {2+2} {last}"
print(full)

subject = "Python programming"
print(course.upper())
print(course.lower())
print(course.title())
print(course.rstrip())
print(course.find("pro"))
print(course.replace("p", "j"))
print("pro" in course)
print("java" not in course)
