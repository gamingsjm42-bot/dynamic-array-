<h1>dynamic-array </h1>
<h5>That Array get a deffirents types of values like:</h5>
<h3>example:</h3>
<h4>input: </h4>
```cpp
int* s = new int(4);
std::string* p = new std::string("dsdddddsd");

dynamicArray w;
w.append(s);
w.append(p);

// Reading values back safely
std::cout << *static_cast<int*>(w.get(0)) << "|" 
          << *static_cast<std::string*>(w.get(1)) << std::endl;
```
<h4>output:</h4>
<h5> 4|dsdddddsd</h5>
