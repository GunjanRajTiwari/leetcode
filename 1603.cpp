// Design parking system

class ParkingSystem {
public:
    int big, medium, small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(big<1) return false;
                big -= 1;
                return true;
            case 2:
                if(medium<1) return false;
                medium -= 1;
                return true;
            default:
                if(small<1) return false;
                small -= 1;
                return true;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */