class MinStack:

    def __init__(self):
        self.stack = []
        self.min_stack = []
        self.min_stack.append(sys.maxsize)

    def push(self, val: int) -> None:
        
        # logic for pushing to min stack
        if self.min_stack :
            k = min(val, self.min_stack[-1])
            self.min_stack.append(k)
        
        self.stack.append(val)
        

    def pop(self) -> None:
        self.stack.pop()
        self.min_stack.pop()
            

    def top(self) -> int:
        return self.stack[-1]

    # min_stack : MAX, 5, 0,
    # stack : 5, 0, 2,

    def getMin(self) -> int:
        return self.min_stack[-1]
