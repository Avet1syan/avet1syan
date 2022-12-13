<?php 
    require_once 'my_class.php';

    $x = new Car;
    $x->marka = 'Toyota';
    $x->color = 'Белый';

    echo $x->marka.' '.$x->color.'<br>';
    $x->go();
    $x->turn();
    $x->stop():
    ?>