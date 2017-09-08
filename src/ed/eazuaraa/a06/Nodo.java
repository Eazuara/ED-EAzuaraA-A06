/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ed.eazuaraa.a06;

/**
 *
 * @author eazuara
 */
public class Nodo {
    int data;
    Nodo next;

    public Nodo() {
        data=0;
        next=null;
    }

    public Nodo(int data, Nodo next) {
        this.data = data;
        this.next = next;
    }

    public int getData() {
        return data;
    }

    public void setData(int data) {
        this.data = data;
    }

    public Nodo getNext() {
        return next;
    }

    public void setNext(Nodo next) {
        this.next = next;
    }
    
   
    
}
