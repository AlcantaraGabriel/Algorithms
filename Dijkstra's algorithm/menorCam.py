from queue import PriorityQueue #queue libary
import drawDIS #It's a Libary to draw a edjes or nodes

#-------------Variables-----------------#
matAdj = [] #graph matrix
pesos = [] #weights
vet = [] #
pesosFila = PriorityQueue() #PriorityQueue
pi = [] # predecessors
int_lim = 32767 #lim int
#-------------Variables-----------------#

#print adjacency matrix
def imprimirMATADJ(mat):
    for i in range(0,len(mat)):
        print(mat[i])



print ("Digite a quantidade de vértices: ")
qtdVertices = int(input())#read number of edjes
drawDIS.drawVertices(qtdVertices)#draw edjes

print("Digite a quantidade de arestas: ")
qtdArestas = int(input())


for i in range(0,qtdVertices):
    matAdj.append([])#add lista vazia a matriz de adjacência 
    for j in range(0,qtdVertices):
        matAdj[i].append(-1)#default value: -1

imprimirMATADJ(matAdj)

#read nodes
##lista_aresta_desenho =[]
##for i in range(0,qtdArestas):
##    x, y , p = map(int, input().split())#aresta
##    lista_aresta_desenho.append((x,y,p))
##    drawDIS.drawArestas(lista_aresta_desenho)
##    matAdj[x][y] = p #armazenando peso
matAdj[0][1] = 1
matAdj[0][3] = 3
matAdj[0][4] = 10

matAdj[1][2] = 5
matAdj[2][4] = 1

matAdj[3][2] = 2
matAdj[3][4] = 6


#update priority queue
def upFila():

    while not pesosFila.empty():
        pesosFila.get()
        
    print("Atualizando Fila...\n")
    for v in range(0,qtdVertices):
        if(vet[v]==False):
            pesosFila.put((pesos[v],v))

#initialize variables and algorithm
lista_menor_way = []
def Init_Sin_Sou(s):
    for v in range(0,qtdVertices):
        pesos.append(int_lim)#add valor  a pesos
        pi.append(None)#add valor a lista de antecessores
        lista_menor_way.append(None)
        vet.append(False)
    print(pesos)
    pesos[s] = 0
    print(pesos)

#relax the nodes
def Relax(u,v,w):
    if(pesos[v]>pesos[u]+w):
        pesos[v] = pesos[u]+w
        pi[v] = u
        lista_menor_way[v] = (u,v,w)#menor_caminho
    print(pesos)
    print(pi)
    upFila()

#main function
def DIJKSTRA(s):
    Init_Sin_Sou(s)
    print("Inicializando Fila...")
    upFila()
    while pesosFila.qsize()!=0:
        u = pesosFila.get()
        #print (u)
        vet[u[1]] = True#já foi removido uma vez da fila de prioridade
        drawDIS.drawVertice(u[1])#vertice da fila
        arestas_relaxamento = []
        for j in range(0,qtdVertices):
            if(matAdj[u[1]][j]!=-1):
                Relax(u[1],j,matAdj[u[1]][j])
                arestas_relaxamento.append((u[1],j,matAdj[u[1]][j]))
                drawDIS.drawArestas(arestas_relaxamento)
    
#imprimirMATADJ(matAdj)

#call the algorithm
DIJKSTRA(0)

##for i in range(0,qtdVertices):
##    if(lista_menor_way[i]==None):
##        lista_menor_way.remove(lista_menor_way[i])
print(lista_menor_way)
lista_menor_way.remove(None)
drawDIS.drawArestas(lista_menor_way)
#print(pesos)
#print(pi)

