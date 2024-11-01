from django.db import models

# Create your models here.

class signup_data(models.Model):
    name=models.CharField( max_length=50)
    email=models.CharField(max_length=50)
    password=models.CharField( max_length=50)
    def __str__(self):
        return self.name

class profilePic(models.Model):
    fkey=models.OneToOneField(signup_data,on_delete=models.CASCADE)
    picture=models.ImageField(upload_to="profilePic",default="default.jpg")
    def __str__(self):
        return self.fkey.name
    
    
