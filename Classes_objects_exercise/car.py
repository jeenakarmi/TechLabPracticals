class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

    def describe_car(self):
        print(f"Make: {self.make}\tModel:{self.model}\tYear:{self.year}")

  