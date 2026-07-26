#include <stddef.h>
/// @brief that array in his element in deffirence types
struct dynamicArray
{
  private:
    //vars  
    void* elements [99];
    size_t size=0;
    public: 
    ////@brief add new element to array
    ///@param newElement that element will add it
    /// @return void
    void append(void * newElement){elements[size++]=newElement;}
    //add
    ///@brief get element from array
    ///@param index id on elemnt to get it
    ///@return void*
    void* operator[](size_t index){return elements[index];}
    ///@brief that set a element to new element
    ///@param index that id from element
    ///@param element that element you set it
    ///@return void
    void set(size_t index,void* element){elements[index]=element;}
    /// @brief that  contractor toc get new array
    /// @param sizeOfElements number of element
    /// @param elements that array of pointers obj
    void del(size_t index)
    { 
      //set var for old version of element
      void *elementsOld[99];
      //set oldElement = element
      for(size_t i =0;i <size;i++) elementsOld[i] = elements[i];
      //do ing for loop to set all element except this->element[i]
      for(int i = index-1;i<size-1;i++) elements[i] =elementsOld[i+1];
      //fix size
      size--; 
    }
    /// @brief constactor to get arr
    /// @param sizeOfElements that count of elements
    /// @param elements that in array
    dynamicArray(size_t sizeOfElements,void* *elements)
    {
      for (size_t i = 0; i < sizeOfElements; i++) append(elements[i]);
      size = sizeOfElements;
    }
    ///@brief constactor to get arr
    ///@param sizeOfElements that count of elements
    ///@param elements that void* elements on array
    /// @brief that function return sizeOfArray
    /// @return size_t
    size_t length(){return size;}
    ///
    ///
    ///
    dynamicArray(size_t sizeOfArray,void* ...)
    {
      void* elementsArr[] = {...};
      *this = dynamicArray(sizeOfArray,elementsArr);
    }
}; 