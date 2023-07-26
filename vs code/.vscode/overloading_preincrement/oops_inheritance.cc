class shape{
    public:
        virtual void side_of_shape()=0;
        virtual void area()=0;
};

class trapezoid:public shape{
    private:
        int height;
        int l1;

        int l2;
    public:
        void get_data(){
            cout<<"Height: ";
            cin>>height;
            cout<<"l1: ";
            cin>>l1;
            cout<<"l2: ";
            cin>>l2;
        }
        void area(){
            cout<<"Area of trapezium is: "<<(l1+l2)*height/2<<endl;
        }
        void side_of_shape(){
            cout<<"sides of trapezoid are 4"<<endl;
        }
};

class triangle:public shape{
    private:
        int base;
        int height;
    public:
        void get_data(){
            cout<<"Base: ";
            cin>>base;
            cout<<"Height: ";
            cin>>height;
        }
        void side_of_shape(){
            cout<<"sides of triangle are 3"<<endl;
        }
        void area(){
            cout<<"Area of triangle is: "<<base*height/2<<endl;
        }
};

class rectangle:public shape{
    private:
        int length;
        int breadth;
    public:
        void get_data(){
            cout<<"Lenght: ";
            cin>>length;
            cout<<"Breadth: ";
            cin>>breadth;
        }
        void side_of_shape(){
            cout<<"side of rectangle are 4"<<endl;
        }
        void area(){
            cout<<"Area of rectangle is: "<<length*breadth<<endl;
        }
    
};

int main(){
    triangle t;
    rectangle r;
    trapezoid tr;
    t.side_of_shape();
    r.side_of_shape();
    tr.side_of_shape();
    t.get_data();
    r.get_data();
    tr.get_data();
    t.area();
    r.area();
    tr.area();
}