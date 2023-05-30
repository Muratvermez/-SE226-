import mysql.connector
from tkinter import *

db = mysql.connector.connect(
    host="localhost",
    user="murat",
    password="Murattt123",
    database="marvel"
)

cursor = db.cursor()
def create_table():
    query = """
    CREATE TABLE movies (
        ID INT,
        MOVIE VARCHAR(255),
        DATE DATE,
        MCU_PHASE VARCHAR(255)
    )
    """
    cursor.execute(query)


def populate_table():
    with open('marvel.txt', 'r') as file:
        next(file)  # Skip the header line
        for line in file:
            line = line.strip()
            data = line.split('\t')

            movie_id = int(data[0])
            movie_title = data[1]
            release_date = data[2]
            mcu_phase = data[3]

            # Q2: Create database connection
            cnx = mysql.connector.connect(
                host='localhost',
                user='murat',
                password='Murattt123',
                database='marvel'
            )
            cursor = cnx.cursor()

            # Q3: Insert data into table
            insert_query = """
                INSERT INTO movies (ID, Movie, DateInfo, Mcu_Phase)
                VALUES (%s, %s, %s, %s)
            """
            values = (movie_id, movie_title, release_date, mcu_phase)
            cursor.execute(insert_query, values)

            cnx.commit()
            cursor.close()
            cnx.close()

def add_button_click():
    def ok_button_click():
        movie_data = popup_entry.get()

        fields = movie_data.strip().split("\t")

        ID = int(fields[0])
        MOVIE = fields[1]
        DATE = fields[2]
        MCU_PHASE = fields[3]

        query = "INSERT INTO movies (ID, MOVIE, DATE, MCU_PHASE) VALUES (%s, %s, %s, %s)"
        values = (ID, MOVIE, DATE, MCU_PHASE)
        cursor.execute(query, values)

        db.commit()

        popup.destroy()

    def cancel_button_click():

        popup.destroy()

    popup = Tk()
    popup.title("Add Movie")

    Label(popup, text="Enter movie data:").pack()
    popup_entry = Entry(popup, width=50)

    ok_button = Button(popup, text="OK", command=ok_button_click)
    ok_button.pack()
    cancel_button = Button(popup, text="Cancel", command=cancel_button_click)
    cancel_button.pack()

    popup.mainloop()

def list_all_button_click():
    textbox.delete("1.0", END)

    query = "SELECT * FROM movies"
    cursor.execute(query)

    results = cursor.fetchall()

    for row in results:
        textbox.insert(END, f"{row}\n")

root = Tk()

ids = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22]
selected_id = StringVar(root)
selected_id.set(ids[0])
dropdown = OptionMenu(root, selected_id, *ids)
dropdown.pack()

textbox = Text(root, height=10, width=50)
textbox.pack()

add_button = Button(root, text="Add", command=add_button_click)

list_all_button = Button(root, text="List All", command=list_all_button_click)
list_all_button.pack()

create_table()

populate_table()

root.mainloop()
