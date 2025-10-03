from django.db import models

# Create your models here.

class Book(models.Model):
    title = models.CharField(max_length=100)
    author = models.CharField(max_length=50)
    published_date = models.DateField()
    pages = models.IntegerField()
    isbn = models.CharField(max_length=13, unique=True)
    in_stock = models.BooleanField(default=True)
    genre = models.CharField(max_length=50, default='Unknown')

    def __str__(self):
        return self.title


