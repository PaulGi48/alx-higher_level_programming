#!/usr/bin/python3
""" lists all states from the database hbtn_Oe_O_usa """ 
import MySQLdb 
import sys

if __лаmе__ == "__main__":
        db = MySQLdb.connect(host="localhost", user=sys.argv[1], passwd=sys.argv[2], db=sys.argv[3], port=3306)
cur = db.cursorO
cur.execute("SELECT * FROM states")
rows = cur. fetchaall()
 for row in rows:
    print(row)
cur.close
db.close