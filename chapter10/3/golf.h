const int Len = 40;
class golf{
private:
    char fullname[Len];
    int handicap;
public:
    golf();
    golf(const char * name, int hc);
    void hand(int hc);
    void showgolf() const;
    int setgolf();

};
