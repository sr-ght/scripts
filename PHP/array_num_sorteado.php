<?php
    
    $arr = array();
    $rep = 0;
    $n = 0;
    
    for($i = 0; $i < 20; $i++){
        $num = mt_rand(1, 10);
        $arr[$i] = $num;

        $conting = 0;
        $numRep = 0;

        for($j = 0; $j < sizeof($arr); $j++){
            if($arr[$i] == $arr[$j]){
                $conting++;
                
                if($conting > $rep){
                    $rep = $conting;
                    $n = $arr[$i];
                }
            }
        }
    }

    $cont = 0;
    echo "Array sorteado = [";
    while($cont < 20){
        print("$arr[$cont], ");
        $cont++;
    }
    echo "]";
    
    print("\nNúmero que mais se repete é $n\n");
    print("Ele se repete $rep vezes");

?>