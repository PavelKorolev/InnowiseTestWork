CREATE DATABASE  IF NOT EXISTS `shop` 

DROP TABLE IF EXISTS `artists`;

CREATE TABLE `artists` (
  `singer_id` int NOT NULL AUTO_INCREMENT,
  `singer` varchar(50) DEFAULT NULL,
  `album` varchar(50) DEFAULT NULL,
  `year` int DEFAULT NULL,
  `sale` int DEFAULT NULL,
  PRIMARY KEY (`singer_id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

LOCK TABLES `artists` WRITE;

INSERT INTO `artists` VALUES (1,'Bon Jovi','Have a Nice Day',2005,1200000),(2,'Scorpions','Blackout',1982,400000),(3,'Iron Maiden','Dance of Death',2003,2300000),(4,'Bon Jovi','Crush',2000,600000),(5,'Bon Jovi','2020',2020,1500000),(6,'Iron Maiden','Piece of Mind',1983,1200000),(7,'Scorpions','Crazy World',1990,800000),(8,'Iron Maiden','Rock in Rio',2002,1900000),(9,'Scorpions','World Wide Live',1985,500000);

UNLOCK TABLES;
