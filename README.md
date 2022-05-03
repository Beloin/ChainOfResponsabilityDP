# Chain of Responsibility

Do you ever needed to call something that requires a context, and you can't exactly
know who will answer it? In fact, that's a really common thing when we are developing
a great framework. An easy example would be asking to handle a request from a user interacting
with an interface, like pressing a Button in a ... tree.  
In our code, we will show how to use Chain of Responsibility to achieve the solution of this
problem.


Problem: Interface with multiples items.
Solution: Pass the handler to the successor of each Item.

Composite: Item With More Items (Like composite Pattern)
Button: Normal Button
ButtonHandler: Handler Of the button
ContainerLayout: A box contained layout

App Layout:  
ContainerLayout -> ButtonHandler -> ContainerLayout -> Button 