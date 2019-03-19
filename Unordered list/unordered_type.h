/******************************************************************** 
 A list consists of a sequence of like typed data that can have these 
 operations applied to it:
   Create - set up an empty list
   Append - add a itme to the end of the list
   Search - look for a specific value in the list and return a False or True
   Delete - find a remove a specific item in the list
   Assign - copy one list to another
      
 In order to implement a list you need a way to store the data (an array
 for instance) and a way to do each of the operations on the data.
      
 To do that, a list may need some utility operations, too. Such as:
   is_empty - return true if the list is empty false otherwise
   is_full - return true if the list is full false otherwise
   empty - remove all data from the list
   length - find an return the number of data in the list
   retrieve_nth - return the nth member of the list (this can lead to errors)
      What if n > than the number of data in the list?
      What if the list is empty?
   maximum_data - return the maximum number of data allowed
   go_to_first - set a counter to the first subscript
   get_next - return the value sunscripted by the counter and
      increment the counter
 ************************************************************************/
 
 /***********************************************************************     
 A class in a tool used by programmers to encapsulate data
 and the operations that apply to the data.
 Any class should contain certain types of operations
   constructor - create the data structure as empty
   transformers - operations that make changes to the data
      append, delete, empty, assign
   observers - operations that discover information about the data
      is_empty, is_full, search, length,
   traversers - operations that allow sequential access to the data
      retrieve, go_to_first, get_next, go_to_last
  
  Classes are built by using two files and header file (.h) and an
  implementaion file (.cpp)
  
*********************************************************************/
//implement a static unordered list of ints as a class

#ifndef UNORDERED_TYPE_H // if this class has already been compiled then
                         // don't compile it again

   class unordered_type // define the class name
   {
   // public methods can be used the program that uses the class

   public: // methods (in classes operations are referred to as methods)
           // methods are functions or procedures
           
    //constructors - set up two types of constructor

      unordered_type(); // null constructor - empty list

      unordered_type(const unordered_type& lst); // copy constructor -
                        // make a list that is a copy of another list   
    //transformers

    // add an item to the end of the list
      void append(const int& item);

    // find and remove a specific item from the list
      void remove(const int item); // called remove because delete is predefined

    // make the list empty
      void clear();

    // copy the list to another list object -- use the = operator for this method
      unordered_type operator= (const unordered_type& lst);
   
    //observers
    // get the whichth item in the list - 

    // raise overflow error if list is too short
      int get_item(unsigned short which);

    // find out how many data are in the list
      unsigned short length()const;

    // find out if the list is empty
      bool is_empty();

    // find out if the list is full
      bool is_full();

    // search the list for an item
      bool search(int item);

    // return maximum number of data allowed
      unsigned short max();

      void print(); // prints list

      void testToF(bool test)const; // prints out if the value is true or false

      void print_which(int which)const; // prints output of which function if it exists
   
    //iterators
    // set a global persistant counter to the first item in the list
      void goto_first();

    // get the "next" item in the list based on a global persistant counter
    // and increment the counter
      int get_next();

    // set global persistant counter to the last item in the list
      void goto_last();
   
   protected: // this the data section
    // define maximium length
      static unsigned short const MAX = 10;

    // class global persistant counter
      unsigned short next; // this can be changed but retains its value
                           // between mathod calls

    // define data array
      int list_data[MAX];

    // keep the number of items in the list
      unsigned short how_many;
   

    //local methods
      unsigned short find_item(int item); 
   	// find the item and return the location of it
      // used by the remove method
   };

#define UNORDERED_TYPE_H // define the name
#endif // end the if from the top of the class
