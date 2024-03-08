# [백준] 카드2 (2164번)

## ⏰ **time**

30분

## :pushpin: **Algorithm**

자료구

## ⏲️**Time Complexity**

O(N)

## :round_pushpin: **Logic**

- ```
  class Node {
    constructor(value) {
      this.value = value;
      this.next = null;
      this.prev = null;
    }
  }
  
  class LinkedList {
    constructor() {
      this.head = null;
      this.tail = null;
      this._size = 0;
    }
  
    add(value) {
      const newNode = new Node(value);
  
      if (!this.head) {
        this.head = newNode;
      } else {
        this.tail.next = newNode;
        newNode.prev = this.tail;
      }
  
      this.tail = newNode;
      this._size++;
  
      return newNode;
    }
  
    getHead() {
      return this.head.value;
    }
  
    removeHead() {
      this.head = this.head.next;
      this.head.prev = null;
      this._size--;
    }
  
    getSize() {
      return this._size;
    }
  }
  ```

## :black_nib: **Review**

- 연결리스트 문제를 처음 풀어봐서 참고를 많이 했다
