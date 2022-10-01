from abc import ABCMeta,abstractmethod
class Vechicle(metaclass=ABCMeta):
    @abstractmethod
    def payment_mode(self):
        pass
    
class Car(Vechicle):
    def payment_mode(self):
        print("lkhdlfn")
        
class BMW(Vechicle):
    pass

BMW()