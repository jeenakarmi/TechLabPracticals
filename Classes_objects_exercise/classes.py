# q.no 1: Illustrating simple Dog class with name and age as attribute
# class Dog:
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age

#     def __str__(self):
#         return f"{self.name}({self.age})" 

# dog_info = Dog("Jimmy", 8)
# print(dog_info)

# q.no 2: Making two instances of a Dog class

# dog1_info = Dog("Bruno", 2)
# print(f"First dog info: {dog1_info}")

# dog2_info = Dog("Sher", 3)
# print(f"Second dog info: {dog2_info}")
    
# q.no 3: Define class Car (make,model,year)Add method to describe all 
# class Car:
#     def __init__(self,make,model,year):
#         self.make = make
#         self.model = model
#         self.year = year

#     def describe_car(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")
 
# car1 = Car("Camry","Toyota",2023)
# car1.describe_car()

# q.no 4: Add default value to fuel attribute and add method to check fuel
# class Car:
#     def __init__(self,make,model,year,fuel_level = 100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def check_fuel_level(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}\t Fuel_level: {self.fuel_level}") 
    
# car1 = Car("Toyota","Camry",2023,90)
# car1.check_fuel_level()

# q.no 5: Add method to change fuel level 
# class Car:
#     def __init__(self,make,model,year,fuel_level = 100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def describe_car(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

#     def check_fuel_level(self):
#         print(f"Fuel Level: {self.fuel_level}")

#     def change_fuel(self, fuel_amt):
#         self.fuel_level = fuel_amt

# my_car = Car("Civic", "Honda", 2012)
# my_car.check_fuel_level()
# my_car.change_fuel(50)
# my_car.check_fuel_level() 



# que 6: craete child class ElectricCar, add battery_size as attribute with default value, add method to describe battery size
# class Car:
#     def __init__(self, make, model, year, fuel_level=100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def describe_car(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

#     def check_fuel_level(self):
#         print(f"Fuel Level: {self.fuel_level}")

#     def change_fuel(self, fuel_amt):
#         self.fuel_level = fuel_amt 

# class ElectricCar(Car):
#     def __init__(self, battery_level=100):
#         self.battery_level = battery_level
    
#     def check_battery_level(self):
#         print(f"Battery Level: {self.battery_level}")

# my_car = ElectricCar()
# my_car.check_battery_level() 

# que 7: Modify ElectricCar to include __init__()
"""Initializes parent class attributes as well as its own attribute battery size"""

# class Car:
#     def __init__(self, make, model, year, fuel_level=100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def describe_car(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

# class ElectricCar(Car):
#     def __init__(self, make, model, year, battery_level=100):
#         super().__init__(make, model, year)
#         self.battery_level = battery_level
    
#     def check_battery_level(self):
#         print(f"Battery Level: {self.battery_level}")

# my_car = ElectricCar("Tesla", "X", 2022)
# my_car.describe_car()
# my_car.check_battery_level()

# que 8: Add method to child class that calculates range of car based on battery size
# class Car:
#     def __init__(self, make, model, year, fuel_level=100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def describe_car(self):
#         print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

# class ElectricCar(Car):
#     def __init__(self, make, model, year, battery_level=50):
#         super().__init__(make, model, year)
#         self.battery_level = battery_level
    
#     def check_battery_level(self):
#         print(f"Battery Level: {self.battery_level}")

#     def calc_range(self):
#         print(f"The car will run {self.battery_level * 2}km at current battery level ({self.battery_level})")

# my_car = ElectricCar("Tesla", "X", "2022")
# my_car.describe_car()
# my_car.check_battery_level()
# my_car.calc_range() 

# que 9: Override describe_car() method in child class to include info about its battery size along with car's make, model and year
# class Car:
#     def __init__(self, make, model, year, fuel_level=100):
#         self.make = make
#         self.model = model
#         self.year = year
#         self.fuel_level = fuel_level

#     def describe_car(self):
#          print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

# class ElectricCar(Car):
#     def __init__(self, make, model, year, battery_level=50):
#         super().__init__(make, model, year)
#         self.battery_level = battery_level
    
#     def check_battery_level(self):
#         print(f"Battery Level: {self.battery_level}")

#     def describe_car(self):
#         print(f"Make: {self.make} Model: {self.model} Year: {self.year} BatterySize: {self.battery_level}")

# my_car = ElectricCar("Tesla", "X", 2022, 80)
# my_car.describe_car()

# que 10
""" 
Assume to have another file called car.py that contains car class. 
Wite new py script that imports car class from car.py
Create instance of car and call describe_car method
"""

# from car import Car
# my_car = Car("Civic", "Honda", 2012)
# my_car.describe_car()

