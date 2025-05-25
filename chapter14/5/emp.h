#pragma once
#include <iostream>
#include <string>

class abstr_emp
{
private:
    std::string fname;
    std::string lname;
    std::string job;

public:
    abstr_emp();
    abstr_emp(const std::string &fn, const std::string &ln,
              const std::string &j);
    virtual void ShowAll() const;
    virtual void SetAll();
    friend std::ostream &operator<<(std::ostream &os, const abstr_emp &e);
    virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp
{
public:
    employee();
    employee(const std::string &fn, const std::string &ln,
             const std::string &j);
    virtual ~employee(){}
    virtual void ShowAll() const;
    virtual void SetAll();
};
class manager : virtual public abstr_emp
{
private:
    int inchargeof;

protected:
    int InChargeOf() const { return inchargeof; }
    int &InChargeOf() { return inchargeof; }
    virtual void Data() const;
    virtual void setData();

public:
    manager();
    manager(const std::string &fn, const std::string &ln, const std::string &j,
            int ico = 0);
    manager(const abstr_emp &e, int ico);
    manager(const manager &m);
    virtual ~manager(){}
    virtual void ShowAll() const override;
    virtual void SetAll() override;
};

class fink : virtual public abstr_emp
{
private:
    std::string reportsto;

protected:
    const std::string ReportsTo() const { return reportsto; }
    std::string &ReportsTo() { return reportsto; }
    virtual void Data() const;
    virtual void setData();

public:
    fink();
    fink(const std::string &fn, const std::string &ln, const std::string &j,
         const std::string &rpo);
    fink(const abstr_emp &e, const std::string &rpo);
    fink(const fink &e);
    virtual ~fink(){}
    virtual void ShowAll() const override;
    virtual void SetAll() override;
};
class highfink : public manager, public fink
{
public:
    highfink();
    highfink(const std::string &fn, const std::string &ln, const std::string &j,
             const std::string &rpo, int ico);
    highfink(const abstr_emp &e, const std::string &rpo, int ico);
    highfink(const fink &f, int ico);
    highfink(const manager &m, const std::string &rpo);
    highfink(const highfink &h);
    virtual ~highfink(){}
    virtual void ShowAll() const override;
    virtual void SetAll() override;
};
