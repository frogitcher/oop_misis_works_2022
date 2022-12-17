class ValueModuleX {
    private:
        int value;
        int x;

    public: 
    	ValueModuleX() {
            this->value = 0;
            this->x = 5;
        }
        ValueModuleX(int _value, int _x) {
            this->value = (_value % _x + _x) % _x;
            this->x = _x;
        }

        ~ValueModuleX() {
            delete(this);
        };

        ValueModuleX operator+(ValueModuleX a) {
            return ValueModuleX(this->value + a.value, this->x); 
        }
        ValueModuleX operator-(ValueModuleX a) {
            return ValueModuleX(this->value - a.value, this->x); 
        }
        ValueModuleX operator*(ValueModuleX a) {
            return ValueModuleX(this->value * a.value, this->x); 
        }
        void operator=(ValueModuleX a) {
            this->value = a.value;
            this->x = a.x;
        }
        int getValue() {
            return this->value;
        }
};