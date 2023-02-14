# general syntax
    |include ...
    
    class hello;

    class main {
        static hello hi();

        Func main(int argc, char** argv) => int {
            out.println(hi);
        }
    }
    
    class hello {
        Func __init__(self) => {
            pass;
        }
        
        Func __repr__(this) => {
            return "Hello, World!";
        }
    }
yes, yes, lots to go through

First of all the 