from django.urls import path
from . import views

urlpatterns = [
     path("", views.app1home),
     path("signup",views.signup),
     path("login",views.login),
     path("Profile",views.Profile),
     path("Logout",views.Logout),
     path("Update",views.Update),
     path("Delete",views.deleted),
     path("Upload",views.Upload)
]