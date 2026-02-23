-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 23, 2026 at 03:12 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.1.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `logitech`
--

-- --------------------------------------------------------

--
-- Table structure for table `customers`
--

CREATE TABLE `customers` (
  `id` int(11) NOT NULL,
  `manufacturer` varchar(50) NOT NULL,
  `customer_name` varchar(50) DEFAULT NULL,
  `model_price` int(11) NOT NULL,
  `city` varchar(50) DEFAULT NULL,
  `action_performed` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customers`
--

INSERT INTO `customers` (`id`, `manufacturer`, `customer_name`, `model_price`, `city`, `action_performed`) VALUES
(7, 'Realme', 'Realme', 23000, 'china', 'insert'),
(8, 'Xiaomi', 'Redmi Note', 60000, 'china', 'insert'),
(9, 'samsung', 'galaxy', 85000, 'South Korea', 'insert'),
(10, 'Xiaomi', 'Redmi Note', 85000, 'china', 'update'),
(11, 'Realme', 'Realme', 23000, 'china', 'insert'),
(12, 'Xiaomi', 'Redmi Note', 85000, 'china', 'delete');

-- --------------------------------------------------------

--
-- Table structure for table `models`
--

CREATE TABLE `models` (
  `id` int(11) NOT NULL,
  `model_name` varchar(50) DEFAULT NULL,
  `model_price` int(11) DEFAULT NULL,
  `manufacturer` varchar(50) DEFAULT NULL,
  `location` varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `models`
--

INSERT INTO `models` (`id`, `model_name`, `model_price`, `manufacturer`, `location`) VALUES
(1, 'iphone', 90000, 'apple', 'USA'),
(2, 'nothing phone', 40000, 'nothing', 'UK'),
(3, 'galaxy', 85000, 'samsung', 'South Korea'),
(6, 'pixel', 85000, 'google', 'USA'),
(7, 'Vivo', 35000, 'Vivo', 'china');

--
-- Triggers `models`
--
DELIMITER $$
CREATE TRIGGER `delete_1` AFTER DELETE ON `models` FOR EACH ROW BEGIN 
    	INSERT INTO customers SET action_performed='delete', customer_name=old.model_name, city=old.location,model_price=old.model_price,manufacturer=old.manufacturer; 
    END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `insert_1` AFTER INSERT ON `models` FOR EACH ROW BEGIN 
    	INSERT INTO customers SET action_performed='insert', customer_name=NEW.model_name, city=NEW.location,model_price=NEW.model_price,manufacturer=NEW.manufacturer; 
    END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `update_1` AFTER UPDATE ON `models` FOR EACH ROW BEGIN 
    	INSERT INTO customers SET action_performed='update', customer_name=NEW.model_name, city=NEW.location,model_price=NEW.model_price,manufacturer=NEW.manufacturer; 
    END
$$
DELIMITER ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customers`
--
ALTER TABLE `customers`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `models`
--
ALTER TABLE `models`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `customers`
--
ALTER TABLE `customers`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table `models`
--
ALTER TABLE `models`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
