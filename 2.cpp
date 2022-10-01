def merge_sort(array)
  return array if array.length == 1

  mid_point = array.length / 2
  left = array[0...mid_point]
  right = array[mid_point..-1]

  merge(merge_sort(left), merge_sort(right))

end