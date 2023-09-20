import sqlite3
import pandas as pd
from sqlite3 import connect


conn = sqlite3.connect("/content/chinook.db")
cursor = conn.cursor()
table = pd.read_sql_query("SELECT name FROM sqlite_master WHERE type='table'", conn)
print(table)


CREATE_SQL = """
    CREATE TABLE IF NOT EXISTS Item(
        id integer primary key autoincrement,
        code text not null,
        artist text not null,
        price integer not null
    );"""


cursor.execute(CREATE_SQL)


cursor.execute('SELECT * FROM sqlite_master WHERE type="table" AND name="Item";')
table_list = cursor.fetchall()
for i in table_list:
    for j in i:
        print(j)

## Item 테이블 열어서 확인하기

table = pd.read_sql_query("SELECT * from Item", conn)
table.head()

INSERT_SQL = 'INSERT INTO Item(code,artist,price) VALUES (?,?,?);'

data = (
    ('ABC111','마룬5', 35000),
    ('DFG222','아리아나그란데', 45000),
    ('HIJ333','NCT', 30000)
)


cursor.executemany(INSERT_SQL,data)

conn.commit()

cursor.execute('SELECT * FROM Item')
item_list = cursor.fetchall()
for i in item_list:
    print(i)

cursor.execute('SELECT * FROM Item')
item_list = cursor.fetchall()
for i in item_list:
    print(i)

# table 형태로 확인
item_df = pd.read_sql_query("SELECT * FROM Item", conn)
item_df

SELECT_SQL = 'SELECT * FROM customers LIMIT 10;'# customers table에서 10개만 뽑아내기 힌트'LIMIT 10'


cursor.execute(SELECT_SQL)
rows = cursor.fetchall()
for row in rows:
    print(row)

q = """
SELECT * FROM customers Where Country = "Austria"
"""
## Austria출신 customer 뽑기
pd.read_sql_query(q, conn)

q = """
SELECT * FROM employees LIMIT 5
"""

pd.read_sql_query(q, conn)

##update

UPDATE_SQL = 'UPDATE employees set Title = "IT Manager" WHERE FirstName="Jane";'
cursor.execute(UPDATE_SQL)

conn.commit()
# employee 테이블에서 Jane의 직업을 'IT Manager'로 바꾸시오
cursor.execute('SELECT * FROM employees WHERE FirstName="Jane";')
employee = cursor.fetchall()
print(employee)

# 삭제

DELETE_SQL = 'DELETE FROM Item WHERE artist="마룬5";'
cursor.execute(DELETE_SQL)

conn.commit()
# ITEM 테이블에서 마룬5가 들어간 row를 제거하시오
cursor.execute('SELECT * FROM Item;')
rows = cursor.fetchall()
for row in rows:
    print(row)
