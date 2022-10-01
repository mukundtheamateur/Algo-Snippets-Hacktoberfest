def binary_search(arr, value, offset=0)
  mid =  (arr.length) / 2
  
  if value < arr[mid] binary_search(arr[0...mid], value, offset) elsif value > arr[mid]
     binary_search(arr[(mid + 1)..-1], value, offset + mid + 1)
  
  else
     return offset + mid
  end

end