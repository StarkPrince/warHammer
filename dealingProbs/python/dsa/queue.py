class EmptyQueueError(Exception):
    """
    Custom Error for empty queue
    """
    pass

class Queue:
    """
    Queue: Fifo data structure
    operations:
        enqueue(item)
        dequeue()
        isEmpty()
        size()
    """
    def __init__(self):
        """
        Define an empty queue.
        here we are using list to implement queue data structure.
        """
        self._data = []

    def isEmpty(self):
        """
        Test if the queue has no items.
        :return: True if queue is empty. False otherwise.
        """
        return self.size() == 0

    def enqueue(self,item):
        """
        insert the item at the rear of the queue.
        :param item: item to be added on to the queue.
        """
        self._data.append(item)

    def dequeue(self):
        """
        removes an element from the front of the queue.
        :return: item removed from the front of the queue
        :raises: EmptyQueueError if the queue is empty.
        """
        if self.isEmpty():
            raise EmptyQueueError("trying to remove from an empty queue.")
        return self._data.pop(0)

    def size(self):
        """
        :return: the size of the queue.
        """
        return len(self._data)

if __name__ == '__main__':
    q = Queue()
    q.enqueue("Prince")
    q.enqueue("Raj")
    q.enqueue("is")
    q.enqueue("very")
    q.enqueue("cool")
    print(q.size())
    while not q.isEmpty():
        print(q.dequeue())