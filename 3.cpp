Node = Struct.new(:data, :next_node)

def insert_node(head, node, location)
  current_node = head
  current_location = 0

  until current_location == location
    previous_node = current_node
    current_node = current_node.next_node
    current_location += 1
  end

  if previous_node
    previous_node.next_node = node
    node.next_node = current_node
  else
    node.next_node = current_node
  end

  head

end

def delete_node(head, location)
  current_node = head
  current_location = 0

  until current_location == location
    previous_node = current_node
    current_node = current_node.next_node
    current_location += 1
  end

  if previous_node
    previous_node.next_node = current_node.next_node
  else
    head = current_node.next_node
  end

  head
end