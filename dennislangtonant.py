# importing turtle module 
import turtle 

def langton(): 

	# Initializing the Window 
	window = turtle.Screen() 
	window.bgcolor('white') 
	window.screensize(1000,1000) 

	# Contains the coordinate and colour 
	maps = {} 

	# Initializing the Ant 
	ant = turtle.Turtle() 
	
	# shape of the ant 
	ant.shape('square')	 
	
	# size of the ant 
	ant.shapesize(0.5) 
	
	# speed of the ant 
	ant.speed(10000)								 
	
	# gives the coordinate of the ant				 
	pos = coordinate(ant)							 
	
	while True: 
		
		# distance the ant will move 
		step = 10									
		if pos not in maps or maps[pos] == "white": 
			
			#inverts the colour 
			ant.fillcolor("black")		 
			
			#stamps a copy of the ant on the canvas 
			ant.stamp()								 
			invert(maps, ant, "black") 
			ant.right(90) 
			
			#moves the ant forward 
			ant.forward(step)						 
			pos = coordinate(ant) 
			
		elif maps[pos] == "black": 
			ant.fillcolor("white") 
			invert(maps, ant, "white") 
			
			ant.stamp() 
			ant.left(90) 
			ant.forward(step) 
			pos = coordinate(ant) 

def invert(graph, ant, color): 
	graph[coordinate(ant)] = color 

def coordinate(ant): 
	return (round(ant.xcor()), round(ant.ycor())) 

langton() 
