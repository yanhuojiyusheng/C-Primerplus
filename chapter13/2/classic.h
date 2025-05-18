#pragma once
class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;

public:
    Cd(const char *s1,const char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator=(const Cd &d);
};
class Classic : public Cd
{
private:
    char *name;

public:
    Classic();
    Classic(const char *s1, const char *s2,const char*s3, int n, double x);
    Classic(const Classic & cl);
    ~Classic();
    void Report() const;
    Classic &operator=(const Classic &cl);
};
