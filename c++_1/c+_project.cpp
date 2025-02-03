# Define variables with different data types
age = 25  # integer variable
name = "John"  # string variable
is_student = True  # boolean variable

# This function checks if the person is an adult
def check_adulthood(age):
    """ 
    This function takes 'age' as an input and checks if the person is an adult.
    Returns True if age is 18 or above, otherwise returns False.
    """
    # Using an if statement to check the condition
    if age >= 18:
        return True
    else:
        return False

# Calling the function and storing the result
is_adult = check_adulthood(age)

# Output the result with conditional logic
if is_adult:
    print(f"{name} is an adult.")
else:
    print(f"{name} is not an adult.")

