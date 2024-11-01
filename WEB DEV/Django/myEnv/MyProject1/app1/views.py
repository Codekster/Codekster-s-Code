from django.shortcuts import  render,redirect,HttpResponse

from . models import signup_data,profilePic

# Create your views here.

def app1home(req):
    return render(req,"index.html")
def signup(req):
    if req.method=="GET":
        return render(req,"signup.html")
    
    else:
        name=req.POST.get("Name")
        email=req.POST.get("email")
        password=req.POST.get("security")
        
        if(signup_data.objects.filter(email=email).exists()):
            msg="email already exists. Please login"
            return render(req,"signup.html",{"key":msg})
        
        else:
            ob= signup_data(name=name,email=email,password=password)
            ob.save()
            return redirect("/login") 
          
def login(req):
    if req.method=="POST":
        email=req.POST["email"]
        password=req.POST["password"]
        # print(email,password)
        if(signup_data.objects.filter(email=email).exists()):
            if(signup_data.objects.filter(email=email,password=password)):
                req.session["email"]=email
                
                return redirect("/Profile")
            else:
                return render(req,"login.html",{"msg":"Tera Password dekh re baba ~ BABURAO"})
        else:
            
            return render(req,"login.html",{"msg":"Email bhoolta hai re deva  ~BABURAO"})
        
    return render(req,"login.html")

def Profile(req):
    
    if "email" in req.session:
        email=req.session["email"]
        data=signup_data.objects.get(email=email)
        pic=profilePic.objects.filter(fkey=data)
        return render(req,"Profile.html", {"data":data,"pic":pic})
    else:
        return render(req,"login.html",{"msg":"Please Login again"})

def Logout(req):
    email=req.session["email"]
    if(email):
        del req.session["email"]
        return redirect("/login")
    else:
       return render(req,"login.html",{"msg":"Please Login Again"})
    
    
def Update(req):
    email=req.session["email"]
    data=signup_data.objects.filter(email=email)

    if req.method=="POST":
        id=req.POST.get("id")
        name=req.POST.get("name")
        email=req.POST.get("email")
        password=req.POST.get("password")
        ob= signup_data(id=id,name=name,email=email,password=password);
        ob.save()
        return redirect("/Profile")
    return render(req,"Update.html",{"data":data})

def deleted(req):
    email=req.session["email"]
    data=signup_data.objects.filter(email=email)
    data.delete()
    return redirect("/login")

def Upload(req):
    if req.method=="POST":
        pic=req.FILES["picture"]
        email=req.session["email"]
        data=signup_data.objects.get(email=email)
        ob=profilePic(fkey=data,picture=pic)
        ob.save()
        return redirect("/Profile")
    
    return render(req,"uploadImg.html")
