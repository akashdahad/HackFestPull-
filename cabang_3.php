<!DOCTYPE HTML>
<html>
    <head>
    </head>
    <body>
        <?php
            //$nilai = 85;
            // $nilai = 66;
           $nilai = 40;

            if($nilai >= 80){
                echo "Nilai A";
            }else if($nilai >= 70){
                echo "Nilai B";
            }else if($nilai >= 60){
                echo "Nilai C";
            }else if($nilai >= 50){
                echo "Nilai D";
            }else{
                echo "Nilai E";
            }
        ?>
    </body>
</html>