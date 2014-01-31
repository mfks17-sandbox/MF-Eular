@@num = 0
i = 1

while ( i < 1000 )
  if i % 3 == 0 then
    @@num += i
  elsif i % 5 == 0 then
    @@num += i
  end
  i += 1
end

printf("answer => %d\n" , @@num)
