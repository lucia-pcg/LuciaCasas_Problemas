class MyQueue {
public:
    stack<int> inStack;   // aquí guardo los elementos cuando los meto a la cola
    stack<int> outStack;  // aquí están los elementos listos para salir

    MyQueue() {
        // constructor vacío
    }
    
    void push(int x) {
        // siempre meto el nuevo valor en la pila de entrada
        inStack.push(x);
    }
    
    int pop() {
        // si la pila de salida está vacía, paso todo desde inStack
        if (outStack.empty()) {
            while (!inStack.empty()) {
                // muevo de una pila a la otra (esto invierte el orden)
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        // ahora el elemento correcto está arriba de outStack
        int val = outStack.top();
        outStack.pop(); // lo saco
        return val;     // regreso el valor
    }
    
    int peek() {
        // si outStack está vacía, tengo que mover los datos
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
        // el tope de outStack es el primer elemento de la cola
        return outStack.top();
    }
    
    bool empty() {
        // la cola está vacía si las dos pilas están vacías
        return inStack.empty() && outStack.empty();
    }
};

