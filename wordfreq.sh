cat $1 | tr '\r' '\n' | tr ' ' '\n' |tr A-Z a-z|tr '.' '\n' | tr ',' '\n'|tr '"' '\n'|tr -s '\n'|sort|uniq -c|sort -r
