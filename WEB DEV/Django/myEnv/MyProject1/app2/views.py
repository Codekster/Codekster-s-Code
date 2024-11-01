from django.shortcuts import render,redirect,HttpResponse
from app1.models import signup_data
from .forms import myForms

def myHome(req):
    form=myForms

    return render(req,"index1.html",{"data":form})


# Create your views here.
