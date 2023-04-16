with open('C:\Users\FINE\Documents\GitHub\Polymorphism\Polymorphism\task1.txt', 'r', encoding='utf-8') as f:
    words = f.read().split()
    print(words)  # 👉️ ['one', 'one', 'two', 'two', 'three', 'three']

    unique_words = set(words)
    print(len(unique_words))  # 👉️ 3

    print(unique_words)  # {'three', 'one', 'two'}