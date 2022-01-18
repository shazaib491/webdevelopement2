# class is a collection of method and property
class Myclass:
    # it is used to  isnitialize object value
    def __init__(self, age) -> None:
        self.__age = age

    def setName(self, name):
        self._name = name

    def getName(self):
        # print(self.name)
        print(self.__age)

# wrapping of data in a single is known as encapsulation

# object is runtime entity which hold the ref of class
obj = Myclass(17)
obj.setName("Admin")
obj.getName()
# obj.__age=20
obj._name="fardeen"
print(obj._name)
# print(obj.age)