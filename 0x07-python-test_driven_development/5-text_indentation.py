#!/usr/bin/python3
'''
text indentation function
'''

def text_indentation(text):
    if type(text) is not str:
        raise TypeError("text must be a string")
    else:
        text = text.replace(". ", ".").replace(": ", ":").replace("? ", "?")
        for i in text:
            if i == '.' or i == '?' or i == ':':
                print(i, end="")
                print("\n")
            else:
                print(i, end="")
