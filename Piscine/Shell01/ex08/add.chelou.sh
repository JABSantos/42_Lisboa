echo "obase=13; ibase=5; $FT_NBR1 + $FT_NBR2" | tr "\'\"\?\!" "0234" | sed 's/\\/1/g' | tr "mrdoc" "01234" | sed 's/3base/obase/' | bc | tr "0123456789ABC" "gtaio luSnemf"
