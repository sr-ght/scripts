<?php

    $arr = array(1, 3, 2, 1);  //false
    //[1, 3, 2]  true
    //[1, 2, 1, 2]  false
    ///[3, 6, 5, 8, 10, 20, 15] false
    //[1, 1, 2, 3, 4, 4] false
    //[1, 4, 10, 4, 2] false
    //[10, 1, 2, 3, 4, 5] true
    //[1, 1, 1, 2, 3] false
    //[0, -2, 5, 6] true
    //[1, 2, 3, 4, 5, 3, 5, 6] false
    //[40, 50, 60, 10, 20, 30] false
    //[1, 1] true
    //[1, 2, 5, 3, 5] true
    //[1, 2, 5, 5, 5] false
    //[10, 1, 2, 3, 4, 5, 6, 1] false
    //[1, 2, 3, 4, 3, 6] true
    //[1, 2, 3, 4, 99, 5, 6] true
    //[123, -17, -5, 1, 2, 3, 12, 43, 45] true
    //[3, 5, 67, 98, 3] true

    $c = 0;
    $tam = sizeof($arr);
    $cont = 1;
    $i = 0;

    while($i < $tam){

        if($arr[$i] < $arr[$cont]){
            unset($arr[$cont]);
            $c++;
            $tam--;
            $cont++;
        }
        $cont++;
        $i++;
    }

    if($c <= 1){
        print("TRUE\n");
    }else{
        print("FALSE\n");
    }

    //print_r($arr);

?>