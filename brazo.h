class brazo{
private:
    double x;
    double y;
    double z;
    bool objeto;

    public:

    brazo(int x_ini, int y_ini, int z_ini);

    double getX(); 
    double getY();
    double getZ();
    bool estaSosteniendo();

    void coger();
    void soltar();
    void mover(int x_fin, int y_fin, int z_fin);
    void print();

};
