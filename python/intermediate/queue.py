from collections import deque

class Queue:
    def __init__(self):
        self.buffer = deque

    def enqueue(self,val):
        return self.buffer.appendleft(val)

    def dequeue(self):
        return self.buffer.pop()

    def isEmpty(self):
        return len(self.buff)==0

    def size(self):
        return len(self.buffer)
    