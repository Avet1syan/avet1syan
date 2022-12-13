<?php
require_once 'Student.php';
require_once 'group.php';

$i04 = new Group ('И-04');

$x2 = new Student('Гор', 'Аветисян', 17, 4.3);
$x3 = new Student('Павел', 'Рыженков', 18, 4.1);

$i04->addStudent($x1);
$i04->addStudent($x2);
$i04->addStudent(new Student('Горбунов', 'Максим',18 , 4.1));

$i04->display();

?>