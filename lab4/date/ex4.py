import datetime
d1 = datetime.datetime.now()
d2 = datetime.datetime(2024, 2, 23)
d = d1-d2
print(d.total_seconds())