class electronic_device():
    type_of_device = ["Invertor","PC","Laptop","Bulb","Fan","Mobile","Walkie Takie","Headphone","Mouse"]
    help = 20
    power_consumed = 500
    use = 15
    def det(self):
        return f"This is {self.type_of_device}, It help {self.help} no.of times, we use this {self.use} no. of times"
class pocket_gadget (electronic_device):
    type_of_device = ["Mobile","Walkie Takie","Headphone","Mouse"]
    help = 10
    power_consumed = 300
    use = 5
    no_of_pockets = 3
    # def pg(self):
    #     return f"pocket gadget is more portable!"
class phone (pocket_gadget):
    type_of_device = ["Mobile"]
    help = 6
    use = 3
    no_of_pockets = 1
    data_consumed = "2000 M.B"
    price = "2000 INR"
    def specs(self):
        return f"{self.det()}\ndata consumption is {self.data_consumed}\npower consumption is {self.power_consumed} and\nprice is {self.price} "
# samsung = phone()
realme = phone()
# JBL = pocket_gadget()
# MSI = electronic_device()
# print(samsung.det())
print(realme.specs())
print(10//2)