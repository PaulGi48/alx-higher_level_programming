-- Create states table in hbtn_Oe_O_usa with some data 
CREATE DATABASE IF NOT EXISTS hbtn_Oe_O_usa;
USE hbtn_Oe_O_usa;
CREATE TABLE IF NOT EXISTS states (
id INT NOT NULL AUTO_INCREMENT, 
name VARCHAR (256) NOT NULL,
PRIMARY KEY (id));
INSERT INTO states (name) VALUES ("California"), ("Arizona"), ("Texas"), ("New York"), ("Nevada");