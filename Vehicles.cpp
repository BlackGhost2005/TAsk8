//#include<iostream>
//#include<cassert>
//#include<vector>
//using namespace std;
//typedef unsigned short int ushort;
//
//
//class Engine
//{
//    static ushort static_no;
//    ushort engine_no;
//    string company;
//    float volume;
//public:
//    Engine() : company(), volume()
//    {
//        this->engine_no = static_no++;
//    }
//    Engine( const string company, const float volume)
//    {
//        this->engine_no = static_no++;
//        setCompany(company);
//        setVolume(volume);
//    }
//
//    ushort getEngine_no() { return this->engine_no; }
//    string getCompany() { return this->company; }
//    float getVolume() { return this->volume; }
//
//    void setCompany(const string company)
//    {
//        if (company.length() >= 2)
//        {
//            this->company = company;
//            return;
//        }
//        assert(!"Company minimum 2 herf olmalidir ! ");
//    }
//
//    void setVolume(const float volume)
//    {
//        if (volume > 0.0)
//        {
//            this->volume = volume;
//            return;
//        }
//        assert(!"Volume sehvdir ! ");
//    }
//
//    void Show()
//    {
//        cout << "Engine No : " << this->engine_no << endl;
//        cout << "Engine Company : " << this->company << endl;
//        cout << "Engine Volume : " << this->volume << endl;
//    }
//};
//
//ushort Engine::static_no = 0;
//
//class Vehicle
//{
//    static ushort _static_id;
//	ushort _id;
//    string model;
//    string vendor;
//    Engine engine;
//
//public:
//    Vehicle() : model(), vendor(), engine() { this->_id = ++_static_id; }
//    Vehicle( const string model, const string vendor, Engine engine) {
//
//        this->_id = ++_static_id;
//    }
//
//
//
//    string getModel() { return this->model; }
//    string getVendor() { return this->vendor; }
//    Engine getEngine() { return this->engine; }
//
//    void setModel(const string Model) {
//
//
//
//        if (Model.length() >= 2)
//        {
//            this->model = Model;
//            return;
//        }
//        assert(!"Model minimum 2 herf olmalidir ! ");
//    }
//
//    void setVendor(const string vendor) {
//
//
//
//        if (vendor.length() >= 3)
//        {
//            this->vendor = vendor;
//            return;
//        }
//        assert(!"Vendor sehvdir ! ");
//    }
//
//    void setEngine(Engine engine) {
//
//
//
//        if (engine.getCompany().length() >= 2 && engine.getVolume() > 0.0)
//        {
//            this->engine.setCompany(engine.getCompany());
//            this->engine.setVolume(engine.getVolume());
//            return;
//        }
//        assert(!"Engine sehvdir ! ");
//    }
//
//
//
//
//    void Show()
//    {
//        cout << "ID : " << this->_id << endl;
//        cout << "Model : " << this->model << endl;
//        cout << "Vendor : " << this->vendor << endl;
//        cout << "Engine : " << endl;
//        this->engine.Show();
//
//    }
//};
//
//ushort Vehicle::_static_id = 0;
//
//
//class Car :public Vehicle
//{
//    string color;
//public:
//    Car():color(){}
//    Car(const string model, const string color, const string vendor, Engine engine) :Vehicle(model, vendor, engine)
//    {
//        setModel(model);
//        setVendor(vendor);
//        setEngine(engine);
//        setColor(color);
//    }
//
//    string getColor() { return this->color; }
//
//    void setColor(const string color) {
//
//        if (color.length() >= 2)
//        {
//            this->color = color;
//            return;
//        }
//        assert(!"Color minimum 2 herf olmalidir ! ");
//    }
//
//    void Show()
//    {
//        Vehicle::Show();
//        cout << "Color : " << this->color << endl;
//        cout << "------------------------------------------" << endl;
//    }
//
//};
//
//class Ship :public Vehicle
//{
//    int hasSail;
//public:
//    Ship() :hasSail() {}
//    Ship(const string model, const int hasSail, const string vendor, Engine engine) :Vehicle(model, vendor, engine)
//    {
//        setModel(model);
//        setVendor(vendor);
//        setEngine(engine);
//        setSail(hasSail);
//    }
//
//    int getSail() { return this->hasSail; }
//
//    void setSail(const int hasSail) {
//
//        if (hasSail > 0)
//        {
//            this->hasSail = hasSail;
//            return;
//        }
//        assert(!"Sail sayi minimum 1 olmalidir ! ");
//    }
//
//    void Show()
//    {
//        Vehicle::Show();
//        cout << "Sail : " << this->hasSail << endl;
//        cout <<"------------------------------------------" << endl;
//    }
//
//};
//
//
//class Airplane :public Vehicle
//{
//    int engineCount;
//    int passengersCapacity;
//public:
//    Airplane() :engineCount(), passengersCapacity() {}
//    Airplane(const string model, const int passengersCapacity, const string vendor, Engine engine, const int engineCount) :Vehicle(model, vendor, engine)
//    {
//        setModel(model);
//        setVendor(vendor);
//        setEngine(engine);
//        setengineCount(engineCount);
//        setpassangerCapacity(passengersCapacity);
//    }
//
//    int getengineCount() { return this->engineCount; }
//    int getpassangerCapacity() { return this->passengersCapacity; }
//
//    void setengineCount(const int engineCount) {
//
//        if (engineCount > 0)
//        {
//            this->engineCount = engineCount;
//            return;
//        }
//        assert(!"Engine sayi minimum 1 olmalidir ! ");
//    }
//
//    void setpassangerCapacity(const int passengersCapacity) {
//
//        if (passengersCapacity > 0)
//        {
//            this->passengersCapacity = passengersCapacity;
//            return;
//        }
//        assert(!"Engine sayi  minimum 1 olmalidir ! ");
//    }
//
//
//    void Show()
//    {
//        Vehicle::Show();
//        cout << "Engine Count : " << this->engineCount << endl;
//        cout << "Passangers Capacity : " << this->passengersCapacity << endl;
//        cout << "------------------------------------------" << endl;
//    }
//};
//
//void VehicleDepo()
//{
//    Engine engine("Step It", 5.0);
//
//    vector<Car>car;
//    car.push_back(Car("BMW", "Black", "Almaniya", engine));
//    car.push_back(Car("Mercedes", "White", "Almaniya", engine));
//
//    vector<Ship>ship;
//    ship.push_back(Ship("Ship", 5, "Azerbaijan", engine));
//    ship.push_back(Ship("Ship1", 4, "Almaniya", engine));
//
//    vector<Airplane>airplane;
//    airplane.push_back(Airplane("Boeing", 500, "Turkey", engine, 3));
//    airplane.push_back(Airplane("Boeing1", 700, "Turkey", engine, 4));
//
//    cout << "Cars : " << endl;
//    for (Car item : car)
//    {
//        item.Show();
//    }
//
//    cout << "Ship : " << endl;
//    for (Ship item : ship)
//    {
//        item.Show();
//    }
//
//    cout << "Airplanes : " << endl;
//    for (Airplane item : airplane)
//    {
//        item.Show();
//    }
//}
//int main() {
//
//
//    VehicleDepo();
//
//
//}