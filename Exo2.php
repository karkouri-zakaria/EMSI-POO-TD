<?php
for($i=1;$i<=8;$i++){
for($j=1;$j<$i+1;$j++){
    $tab[]=$i;
}}
$t = count($tab);
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
echo '<br>';
$j=0;
do {
    for($i = 0; $i < 100; $i++) {
    $num [$i]= rand(1, 500);}
    for($i = 0; $i < count($num); $i++){
        echo ' ',$num[$i],' ';
        if ($num[$i]==36) {
            $j=1;
            break;}}
    if ($j==1) {
        echo '<br> Le chiffre 36 existe à la postion: <br>',$i;break;
    }
    else {
        echo "<br> Le chiffre n'exist pas! <br>";
    }
} while ($j==0);
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
$txt='Test'; $titre='titre 3';
switch ($titre) {
    case 'titre 2':
        echo '<h2>',$txt,'</h2>';
        break;
    case 'titre 3':
        echo '<h3>',$txt,'</h3>';
        break;
    case 'titre 4':
        echo '<h4>',$txt,'</h4>';
        break;
    case 'titre 5':
        echo '<h5>',$txt,'</h5>';
        break;
    case 'titre 6':
        echo '<h6>',$txt,'</h6>';
        break;
    default:
        echo '<h1>',$txt,'</h1>';
        break;
//---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------
}
?>
<html>
    <head>
        <title>TD</title>
    </head>


    <body>
    <p>
        <Table border="1px" cellpadding = "3px" cellspacing = "0px">
            <tr>
                <?php for($i = 0; $i < $t; $i++) :?>
                    <td>
                        <?= $tab[$i];?>
                    </td>
                <?php endfor;?>
            </tr>
    </Table>


    </body>




</html>