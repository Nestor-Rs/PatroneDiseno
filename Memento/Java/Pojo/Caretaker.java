package Pojo;

import Memento.*;

public class Caretaker {
    private Memento memento;
    // ---------------------------
     public void setMemento(Memento memento) {
        this.memento = memento;
    }
    // ---------------------------
     public Memento getMemento() {
        return this.memento;
    }
}
