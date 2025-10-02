    #EP 6th Strings Notes

    #What does string mean? its a collection of symbols held together by quotation marks.
    #Where have we used strings? Whenever we use Print

#examples
first_name = input("What is your name/n").strip().title()#Strip includes, lower, upper, and title
last_name = input("What is your name/n").strip().title()
full_name = first_name + " " + last_name

sentence = "The quick brown fox jumps over the lazy dog."

print("Welcome to my program" , full_name)
       
    #syntax error = bad grammar
    #logic error = no sense
    #run-time error = apocolypse, code cannot run without  breaking
    #a bug is an error in your code that makes it not run properly

    #find and split
print(sentence.find("brown"))
print(sentence[10:15])