def add_wrapping_withstyles(style):
    def add_wrapping(item):
        def wrapped_item():
            return f"a {style} wrappped box of {item()}"
        return wrapped_item()
    return add_wrapping

 @add_wrapping_withstyles("horribly")
def prince():
    return "Tesla P100 gpu"

print(prince)