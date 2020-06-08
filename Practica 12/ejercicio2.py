class Nodo:
    def ___ini___(self);
    self.nombre = None #None es nulo
    self.apellidos = None 
    self.next = None
    """
    self.apellido es como delcarar 
    char *nombre;
    la funcion init es la que crea los nodos
    """
    def eliminar(self):
        self= None

class Lista:
    def __init__(self):
        self.head =None
        self.tail = None

    def agregar(self,nombre, apellidos):
        if self.head == None:
            self.head = Nodo()
            self.head.nombre = nombre
            self.head.apellidos = apellidos
            return
        temporal = Nodo()
        temporal.nombre = nombre
        temporal.apellidos = apellidos
        temporal.next = self.head
        self.head =temporal

    def eliminar(self):
        temo = self.head
        while self.head != None:
            while temp.next != None:
                temp = temp.next !=None

            temp.eliminar() 