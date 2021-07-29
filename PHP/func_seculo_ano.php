<?php

    $ano1 = 1905;
    //$ano2 = 1700;

    function SeculoAno($ano1/*, $ano2*/){

        $sec = 1600;
        $s = 17;
        while($sec <= 2000)
        {
            if ($ano1 < $sec+100 && $ano1 > $sec )
            {
                echo "Ano " . $ano1 . " = século " . $s . "\n";
            }

            // Condição para o ano de 1700
            /*if ($ano2 <= $sec+100 && $ano2 > $sec )
            {
                echo "Ano " . $ano2 . " = século " . $s . "\n";
            }*/
            
            $sec+=100;
            $s+=1;
        }
    }

    SeculoAno($ano1/*, $ano2*/);
    
?>