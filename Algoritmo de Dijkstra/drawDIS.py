import networkx as nx
import matplotlib.pyplot as plt

def drawVertices(v):
	G = nx.Graph()
	for i in range(0,v):
		G.add_node(i)
	nx.draw(G,with_labels=True)
	#plt.title("Vertices")
	plt.show()


def drawVertice(v):
	G = nx.Graph()
	G.add_node(v)
	nx.draw(G,with_labels=True)
	#plt.title("Vertices")
	plt.show()

def drawArestas(lista_Arest):
	DG=nx.DiGraph()
	DG.add_weighted_edges_from(lista_Arest)
	nx.draw(DG,with_labels=True)
	plt.show()

#DG=nx.DiGraph()
#DG.add_weighted_edges_from([(1,2,0.5), (3,1,0.75)])

#nx.draw(DG,with_labels=True)
#plt.show()

#print(DG.out_degree(1,weight='weight'))
#print(DG.degree(1,weight='weight'))


#drawVertices(5)
#drawArestas([(0,1,1),(0,3,3),(0,4,10),(1,2,5),(2,4,1),(3,2,2),(3,4,6)])

