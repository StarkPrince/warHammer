class Treenode:
    def __init__(self,data):
        self.name = data[0]
        self.designation = data[1]
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

    def print_tree(self,level):
        if self.get_level()<=level:
            prefix = "   "*self.get_level()+"|--"
            print(prefix+ self.name+" ("+self.designation+")")
            if self.children:
                for child in self.children:
                    child.print_tree(level)

def cuns():
    nilupul = Treenode(["Nilupul","CEO"])
    chinmay = Treenode(["Chinmay","CTO"])
    vishwa = Treenode(["Vishwa","Infrastructure Head"])
    dhaval = Treenode(["Dhaval","Cloud manager"])
    abhijit = Treenode(["Abhijit","App manager"])
    aamir = Treenode(["Aamir","Application Head"])
    gels = Treenode(["Gels","HR Head"])
    peter = Treenode(["Peter","Recruitment Manager"])
    waqas = Treenode(["Waqas","Policy Manager"])

    vishwa.addchild(dhaval)
    vishwa.addchild(abhijit)
    chinmay.addchild(vishwa)
    chinmay.addchild(aamir)
    gels.addchild(peter)
    gels.addchild(waqas)
    nilupul.addchild(chinmay)
    nilupul.addchild(gels)

    return nilupul


if __name__ == '__main__':
    p = cuns()
    p.print_tree(3)
