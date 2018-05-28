// Definition for singly-linked list:
// class ListNode<T> {
//   ListNode(T x) {
//     value = x;
//   }
//   T value;
//   ListNode<T> next;
// }
//
ListNode<Integer> rearrangeLastN(ListNode<Integer> l, int n) {
    ListNode<Integer> slow = l;
    ListNode<Integer> fast = l;
    ListNode<Integer> res = new ListNode<Integer>(0);
    res.next = l;
    ListNode<Integer> head = res;
    
    int counter = 0;
    
    while(fast != null)
    {
        counter ++;
        
        if(fast.next != null)
        {
            fast = fast.next;
        }
        else{
            break;
        }
    }
    
    System.out.println(counter);

    if(n == 0 || counter <= n || counter == 0)
        return l;
    
    fast.next = l;
    
    for(int i = 0; i < counter - n; i++)
    {
        fast = fast.next;
        res.next = res.next.next;   
    }
    
    
    fast.next = null;
    
    return res.next;
}
