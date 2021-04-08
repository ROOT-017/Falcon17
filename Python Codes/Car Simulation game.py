command=""
started = False
while  True :
    command=input('>').lower()
    if command =='start':
        if started:
            print("Car is already started")
        else:
            started = True
            print("Vroom! vroom! car started ready to go...")

    elif command == 'stop':
        if not started:
            print("Car already stopped...")
        else:
            started = False 
            print("Car stopped successfully")

    elif command== "quit":
        break
    elif command =="help":

        print("""
start...to start the car
stop...arto stop the car
quit...to exit
        """)
        

        