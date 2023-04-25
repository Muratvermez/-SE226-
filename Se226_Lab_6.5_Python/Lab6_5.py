# QUESTION 1 ////////////////////////////////////
list1 = [1, 2, 3, 4, 5]
list2 = [2, 4, 6, 8, 10]

def find_common_elements(list1, list2):
    common_elements = []
    for element in list1:
        if element in list2:
            common_elements.append(element)
    return common_elements

print(find_common_elements(list1, list2))
# QUESTION 2 ////////////////////////////////////
list3 = ["murat", "ada", "kısık", "ahmet"]

def find_palindromes(strings):
    palindrome_strings = []
    for string in strings:
        if string == string[::-1]:
            palindrome_strings.append(string)
    return palindrome_strings

print(find_palindromes(list3))
# QUESTION 3 ////////////////////////////////////
list4 = [2, 3, 4, 5, 6, 7, 8, 12, 13, 17, 21]

def sieve_of_eratosthenes_primes(numbers):
    n = max(numbers)
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):
        if prime[p] == True:
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1
    prime_numbers = []
    for i in numbers:
        if i > 1 and prime[i]:
            prime_numbers.append(i)
    return prime_numbers

print(sieve_of_eratosthenes_primes(list4))
#QUESTION 4 ////////////////////////////////////
word_list = ["enlists", "google", "inlets", "banana"]
new_list = []
def anagrams(word, word_list):
    sorted_word = sorted(word)
    anagrams_list = []
    for w in word_list:
        sorted_w = sorted(w.replace(" ", ""))
        if sorted_w == sorted_word:
            anagrams_list.append(w)
    return anagrams_list
print(anagrams("listen",word_list))

