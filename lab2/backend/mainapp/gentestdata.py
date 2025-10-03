import random, string, datetime
from .models import *
from django.db import transaction
import faker
from faker import Faker

fk = Faker()

def gentestdata():
    with transaction.atomic():
        for i in range(1000):
            newBook = Book()
            newBook.title = fk.name()
            newBook.author = fk.name()
            newBook.published_date = fk.date_between(start_date='-30y', end_date='today')
            newBook.pages = random.randint(50, 1000)
            newBook.isbn = ''.join(random.choices(string.digits, k=13))
            newBook.in_stock = random.random() > 0.5
            newBook.save()
    print("OK gentestdata()")

