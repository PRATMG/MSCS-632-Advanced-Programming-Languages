def make_multiplier(factor):
    def multiplier(number):
        return number * factor
    return multiplier

double = make_multiplier(2)
triple = make_multiplier(3)

print(double(5))  # Outputs 10
print(triple(5))  # Outputs 15 
# Dynamic typing: Reassign variable to a different type
double = "I am now a string"
print(double)
