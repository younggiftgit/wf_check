echo -n "Total " ;./wordfreq.sh $2 | awk '{sum += $1};END {print sum}'
./wordfreq.sh $2
