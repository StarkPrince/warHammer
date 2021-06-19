class Treenode:
    def __init__(self,data):
        self.data = data
        self.children = []
        self.parent =None

    def addchild(self,child):
        child.parent = self
        self.children.append(child)

    def get_level(self):
        level = 0
        p = self.parent
        while p:
            level+=1
            p = p.parent
        return level

    def print_tree(self):
        if self.get_level()==0:
            prefix = ""
        else:
            prefix = "   "*self.get_level()+"|--"
        print(prefix+ self.data)
        if self.children:
            for child in self.children:
                child.print_tree()

def cuns():
    grandparents = Treenode("Grandparents")

    uncle1 = Treenode("Shyam")
    uncle1.addchild(Treenode("cousin1"))
    uncle1.addchild(Treenode("cousin3"))

    uncle2 = Treenode("Bikram")
    uncle2.addchild(Treenode("cousin2"))

    parent = Treenode("Brij Mohan")
    parent.addchild(Treenode("me"))
    parent.addchild(Treenode("brother"))


    grandparents.addchild(uncle2)
    grandparents.addchild(uncle1)
    grandparents.addchild(parent)

    return grandparents


if __name__ == '__main__':
    p = cuns()
    p.print_tree()