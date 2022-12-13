<?php
    require_once 'user.php';

    class student extends User {
        public $rate;
        
        public function __construct($n, $s, $a, $r) {
            $this->setinfo($n, $s, $a);
            $this->rate = $r;
        }

        public function show() {
            parent::show();
            echo 'reyting: '.$this->rate.'<br>';
        }

    }

?>