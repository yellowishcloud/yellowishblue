from Dict_of_movies import movies

def category_imdb(category):
    l = [i["imdb"] for i in movies if i["category"] == category]
    return sum(l)/len(l)

print(category_imdb('Crime')) #4.0

