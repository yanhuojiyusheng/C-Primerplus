#pragma once
#include <cstdlib>
#include <string>
using std::string;
class Person
{
private:
    string firstName;
    string secondName;

public:
    Person(const char* f = "bu", const char* s = "eryi")
        : firstName(f), secondName(s)
    {
    }
    virtual void Show() const;
    virtual ~Person() {}
};
class Gunslinger : virtual public Person
{
private:
    double time;
    int notch;

protected:
    void data() const;

public:
    Gunslinger(const char* f, const char* s, double t = 0.0, int n = 0)
        : Person(f, s), time(t), notch(n)
    {
    }
    Gunslinger(double t = 0.0, int n = 0) : time(t), notch(n) {}
    Gunslinger(const Person& p, double t = 0.0, int n = 0)
        : Person(p), time(t), notch(n)
    {
    }
    virtual ~Gunslinger() {}
    double Draw() const { return time; }
    virtual void Show() const override;
};
class Card
{
public:
    static const char* COLOR[4];
    enum suit { Spades, Hearts, Diamonds, Clubs };

private:
    suit color;
    int points;

public:
    Card()
    {
        color = suit(rand() % 4);
        points = rand() % 52 + 1;
    }
    Card(suit s, int p) : color(s), points(p) {}
    suit getColor() const { return color; }
    int getPoint() const { return points; }
};

class PokerPlayer : virtual public Person
{
private:
    Card card;

protected:
    void Data() const;

public:
    PokerPlayer() {}
    PokerPlayer(const char* f, const char* s) : Person(f, s) {}
    PokerPlayer(const Person& p) : Person(p) {}
    virtual ~PokerPlayer() {}
    const Card& Draw() const { return card; }
    void nextCard() { card = Card(); }
    virtual void Show() const override;
};
class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude() {}
    BadDude(const char* f, const char* s, double t, int n)
        : Person(f, s), Gunslinger(t, n)
    {
    }
    double Gdraw() const { return Gunslinger::Draw(); }
    Card Cdraw() const { return PokerPlayer::Draw(); }
    virtual void Show() const override;
};
