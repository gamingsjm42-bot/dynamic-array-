<h1>dynamic-array </h1>
<h5>That Array get a deffirents types of values like:</h5>
<h3>example:</h3>
<h4>input: </h4>
int* s = new int(4);<br>
std::string* p = new std::string("dsdddddsd");<br>

dynamicArray w;<br>
w.append(s);<br>
w.append(p);<br>

// Reading values back safely<br>
std::cout << *static_cast<int*>(w.get(0)) << "|" 
          << *static_cast<std::string*>(w.get(1)) << std::endl;

<h4>output:</h4>
<h5> 4|dsdddddsd</h5>
<br>
<h4>how to setup it:</h4>
<h3>you just to copie that dynamicArray.cpp in main and setup it</h3>
