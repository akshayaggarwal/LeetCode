// Below is the interface for Iterator, which is already defined for you.
// **DO NOT** modify the interface for Iterator.
class Iterator {
    struct Data;
	Data* data;
public:
	Iterator(const vector<int>& nums);
	Iterator(const Iterator& iter);
	virtual ~Iterator();
	// Returns the next element in the iteration.
	int next();
	// Returns true if the iteration has more elements.
	bool hasNext() const;
};


class PeekingIterator : public Iterator {
public:
    int a;
    int flag = 0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    if(nums.size() > 0)
            a = Iterator::next();
            flag = 0;
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
            return a;
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int b = a;
        if(Iterator::hasNext())
            a = Iterator::next();
        else
            flag = 1;
        
        return b;
        
	}

	bool hasNext() const {
        
        if(flag == 0)
            return true;
        else
            return false;
	    
	}
};
