
class Node {
    int data;
    Node prev;
    Node next;
    
    public Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

public class dolby {
    Node head;
    
    public dolby() {
        this.head = null;
    }
    
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        
        if (head != null) {
            head.prev = newNode;
        }
        
        head = newNode;
    }
    
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        
        if (head == null) {
            head = newNode;
            return;
        }
        
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        
        temp.next = newNode;
        newNode.prev = temp;
    }
    
    public void insertAfter(Node prevNode, int data) {
        if (prevNode == null) {
            return;
        }
        
        Node newNode = new Node(data);
        newNode.prev = prevNode;
        newNode.next = prevNode.next;
        
        if (prevNode.next != null) {
            prevNode.next.prev = newNode;
        }
        
        prevNode.next = newNode;
    }
    
    public void deleteNode(Node delNode) {
        if (head == null || delNode == null) {
            return;
        }
        
        if (head == delNode) {
            head = delNode.next;
        }
        
        if (delNode.next != null) {
            delNode.next.prev = delNode.prev;
        }
        
        if (delNode.prev != null) {
            delNode.prev.next = delNode.next;
        }
    }
    
    public void printForward() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
    
    public void printBackward() {
        Node temp = head;
        while (temp != null && temp.next != null) {
            temp = temp.next;
        }
        
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.prev;
        }
        System.out.println("null");
    }
    
    public static void main(String[] args) {
        dolby list = new dolby();

        list.insertAtEnd(10);
        list.insertAtEnd(20);
        list.insertAtBeginning(5);
        list.insertAfter(list.head.next, 15);

        System.out.print("Doubly Linked List (Forward): ");
        list.printForward();

        System.out.print("Doubly Linked List (Backward): ");
        list.printBackward();

        list.deleteNode(list.head.next); // Deleting the second node

        System.out.print("Doubly Linked List after deleting a node: ");
        list.printForward();
    }
}
