# String Palindrome Identifier
# This program verifies whether a given string is a palindrome or not.

def is_palindrome(content: str) -> bool:
    # Remove non-alphanumeric characters and lowercase the string
    clean_text = "".join(char.lower() for char in content if char.isalnum())

    if not clean_text:
        return False

    # Compare the string with its reverse
    return clean_text == clean_text[::-1]


# Taking input from the user.
text = input("Enter the string: ")

# Checking if the string is a palindrome or not:
if is_palindrome(text):
    print(f"The given string {text} is a palindrome.")
else:
    print(f"The given string {text} is not a palindrome.")
