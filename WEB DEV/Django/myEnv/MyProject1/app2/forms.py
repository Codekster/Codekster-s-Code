from django import forms


Gender_Choices=(
    ('Male','Male'),
    ('Female','Female'),
    ('Other','Other'),
)

State_Choices=(
    ('Andhra Pradesh','Andhra Pradesh'),
    ('Telangana','Telangana'),
    ('Karnataka','Karnataka'),
    ('Tamil Nadu','Tamil Nadu'),
    ('Kerala','Kerala'),
    
)

class myForms(forms.Form):
    name=forms.CharField(label='Name',max_length=100)
    password=forms.CharField(label='Password',max_length=100)
    state=forms.ChoiceField(label='State',choices=State_Choices)
    comment=forms.CharField(label='Comments',widget=forms.Textarea)
    date=forms.DateTimeField(label="Date & Time",widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    gender=forms.ChoiceField(label='Gender',choices=Gender_Choices)
    

    