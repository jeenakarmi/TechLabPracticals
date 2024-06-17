def add(x,y):
    return x+y
    
def sub(x,y):
    return x-y

def mul(x,y):
    return x*y
    
def div(x,y):
    if y ==0:
        raise ValueError("Denominator can't be zero!")
    return x/y

# Q.no 9: 
''' 
Modify my_math module so that it can be used both as an imported module and standalone script, it should demostrate functionality of its functions. 
USing if __name__ == "__main__"
'''
if __name__ == "__main__":
    import sys
    try:    
        print(f"{sys.argv[1]} + {sys.argv[2]} = {add(int(sys.argv[1]), int(sys.argv[2]))}")
        print(f"{sys.argv[1]} - {sys.argv[2]} = {sub(int(sys.argv[1]), int(sys.argv[2]))}")
        print(f"{sys.argv[1]} x {sys.argv[2]} = {mul(int(sys.argv[1]), int(sys.argv[2]))}")
        print(f"{sys.argv[1]} / {sys.argv[2]} = {div(int(sys.argv[1]), int(sys.argv[2]))}")
    except:
        print("please pass integer numbers!")