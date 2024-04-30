
def solve():
    while True:
        try:
            str = input()
            res = ''.join(chr(ord(c) - 7) for c in str)
            print(res)
        except EOFerror:
            break



if __name__ == "__main__":
    solve()

 import sys

def solve():
    for line in sys.stdin:
        encrypted_line = ''.join(chr(ord(c) - 7) for c in line.strip())
        print(encrypted_line)

if __name__ == "__main__":
    solve()
