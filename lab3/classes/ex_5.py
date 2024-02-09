class Account:
    def __init__(self, owner, balance):
        self.owner = owner
        self.balance = balance
    
    def deposit(self, money):
        self.balance += money
    
    def withdraw(self, money):
        if self.balance - money >= 0: 
            self.balance -= money
        else: 
            print(f'it isn\'t enough, you only have = {self.balance}tg')
    
    def __str__(self):
        return f'name: {self.owner} \nbalance= {self.balance}'

Ima = Account('AA', 7000)
print(Ima)

Ima.deposit(800)
print(Ima)

Ima.withdraw(5000)
print(Ima)

Ima.withdraw(9000)
print(Ima)