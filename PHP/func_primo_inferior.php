<?php

    //$num = 30;
    $num = 0;

    function PrimoInferior($num){

        if($num == 0){
            return 0;
        }
        else{

            $primoinf = 0;
            $numin = $num;
    
            while($num >= 1){
                $res = 0;
                for($i = 2; $i <= $num/2; $i++){
                    if($num % $i == 0){
                        $res++;
                        break;
                    }
                }
    
                if($res == 0){
    
                    // $primoinf sempre recebe o maior primo
                    if($num > $primoinf){
                        $primoinf = $num;
                    }
                }
                $num--;
            }
    
            echo "O maior primo inferior a " . $numin . " é " . $primoinf;
        }
       
    }

    PrimoInferior($num);

?>