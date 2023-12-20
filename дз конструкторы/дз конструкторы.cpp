#include<iostream>
#include<ctime>
using namespace std;
class People;
class Dog {

    bool tail;
    unsigned short count_ears;
    unsigned short count_legs;
    bool wool;
    unsigned short age;
    double weight = 23.5;

    string name;
    string breed;
    /*string size = "big";*/
    bool is_happy;
    unsigned short hungry;
    string comands[4] = { "sit", "lie", "stand", "voice" };
    string comand;

    unsigned short smart;
    unsigned short energy;
public:
    Dog()
    {
        SetWool(true);
        SetWeight(23.5);
        SetName("Lucky");
        SetBreed("Husky");
        SetHappy(true);
        SetHungry(100);
        SetSmart(0);
        SetAge(6);
        SetEars(2);
        SetTail(true);
        SetLegs(4);
        SetEnergy(100);
        

    }
    Dog(string name, string breed, int age)
    {
        SetName(name);
        SetBreed(breed);
        SetAge(age);
        SetWool(true);
        SetWeight(23.5);        
        SetHappy(true);
        SetHungry(100);
        SetSmart(0);      
        SetEars(2);
        SetTail(true);
        SetLegs(4);
        SetEnergy(100);
    }
    Dog(double weight, string name, string breed)
    {
        SetWeight(weight);
        SetName(name);
        SetWool(true);    
        SetBreed("Husky");
        SetHappy(true);
        SetHungry(100);
        SetSmart(0);
        SetAge(rand() % 8);
        SetEars(2);
        SetTail(true);
        SetLegs(4);
        SetEnergy(100);
    }
    void SetSmart(unsigned short smart)
    {
        if (smart > 100)
            throw "error";
        this->smart = smart;
    }
    unsigned short GetSmart() const
    {
        return smart;
    }
    void SetEnergy(unsigned short energy)
    {
        if (energy > 100)
            throw "error";
        this->energy = energy;
    }
    unsigned short GetEnergy() const
    {
        return energy;
    }

    void SetComand(string comand, int width)
    {
        for (int i = 0; i < width; i++)
            if (comands[i] == comand)
                this->comand = comand;
    }
    string GetComand() const
    {
        return comand;

    }
    void SetHungry(unsigned short hungry)
    {
        if (hungry > 100)
            throw "error";
        this->hungry = hungry;
    }
    unsigned short GetHungry() const
    {
        return hungry;
    }
    void SetHappy(bool is_happy)
    {
        this->is_happy = is_happy;
    }
    bool GetHappy() const
    {
        return is_happy;
    }
    void SetName(string name)
    {

        this->name = name;
    }
    string GetName() const
    {
        return name;
    }

    void SetBreed(string breed)
    {

        this->breed = breed;

    }
    string GetBreed() const
    {
        return breed;
    }
    void SetWeight(double weight)
    {
        if (weight > 0 && weight < 40)
        {
            this->weight = weight;
        }
    }
    double GetWeight() const
    {
        return weight;
    }
    void SetAge(unsigned short age)
    {
        if (age < 16)
        {
            this->age = age;
        }
    }
    unsigned short GetAge() const
    {
        return age;
    }
    void SetWool(bool wool)
    {
        this->wool = wool;
    }
    bool GetWool() const
    {
        return wool;
    }
    void SetTail(bool tail)
    {
        this->tail = tail;
    }
    bool GetTail() const
    {
        return tail;
    }
    void SetLegs(int count_legs)
    {
        if (count_legs < 5)
        {
            this->count_legs = count_legs;
        }
        else
            throw "error";
    }
    int GetLegs() const
    {
        return count_legs;
    }
    void SetEars(int count_ears)
    {
        if (count_ears < 3)
        {
            this->count_ears = count_ears;
        }
        else
            throw "error";
    }
    int GetEars() const
    {
        return count_ears;
    }
    void SayGav() const
    {
        cout << "Gav gav\n";
    }
    void Print() const
    {
        cout << "\t:" << name << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Breed: " << breed << "\n";
        cout << "Energy: " << energy << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Smart: " << smart << "\n";

        cout << "Is happy?: ";
        if (is_happy == 1)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    void GetUp() const
    {
        cout << name << " gets up\n";
    }
    void Sleep()
    {
        cout << name << " is sleeping\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void StudyComands(string comand)
    {
        if (energy > 30)
        {

            if (comands[0] == comand)
            {
                smart += 8;
                energy -= 10;

                cout << name << " trying study sit comand\n";
            }

            else if (comands[1] == comand)
            {
                smart += 10;
                energy -= 10;

                cout << name << " trying study lie comand\n";
            }
            else if (comands[2] == comand)
            {
                smart += 10;
                energy -= 20;

                cout << name << " trying study stand comand\n";
            }
            else if (comands[3] == comand)
            {
                smart += 20;
                energy -= 30;

                cout << name << " trying study voice comand\n";
            }
            else
            {
                cout << name << " don't know how to learn this comand\n";
            }
            is_happy = false;

        }

    }

    void Licking(string human_name)
    {
        cout << name << " lick " << human_name << "\n";
        is_happy = true;
    }

    void Eat()
    {
        cout << "dog is eating\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void Drink()
    {
        cout << "dog is drinking water\n";
        if (energy != 100)
            energy += 10;
        else
            energy = 100;
    }

    void Walking()
    {
        if (energy >= 30)
        {

            cout << "Gav gav go to outside\n";

            energy -= 20;
            is_happy = true;
        }
    }
};

class People {

    bool mood;
    int age;
    string name;
    double weight;
    string surname;
    string dogs_meals[6] = { "meat", "korm", "carrot", "fish", "zucchini", "porridge" };
    string meal;
    int energy;
public:
    People()
    {
        SetAge(16);
        SetName("Oleg");
        SetSurname("Dav");
        SetMood(true);
        SetWeight(75.6);       
        SetEnergy(100);
        

    }
    People(int age, string name, string surname)
    {
       
        SetMood(true);
        SetName(name);       
        SetSurname(surname);       
        SetAge(age);
        SetEnergy(100);
        SetWeight(68.3);

    }
    void SetEnergy(int energy)
    {
        this->energy = energy;
    }
    int GetEnergy() const
    {
        return energy;
    }
    void SetWeight(double weight)
    {
        if (weight > 0 && weight < 268)
        {
            this->weight = weight;
        }
    }
    double GetWeight() const
    {
        return weight;
    }
    void SetName(string name)
    {
        this->name = name;
    }
    string GetName() const
    {
        return name;
    }
    void SetSurname(string surname)
    {
        this->surname = surname;
    }
    string GetSurname() const
    {
        return surname;
    }
    void SetMood(bool mood)
    {
        this->mood = mood;
    }
    bool GetMood() const
    {
        return mood;
    }
    void SetAge(int age)
    {
        if (age > 0 && age < 120)
        {
            this->age = age;
        }
    }
    int GetAge() const
    {
        return age;
    }
    void SetMeal(string dogs_meal, int width)
    {
        for (int i = 0; i < width; i++)
            if (dogs_meals[i] == dogs_meal)
                meal = dogs_meal;
    }
    string GetMeal() const
    {
        return meal;

    }
    void Print() const
    {
        cout << " :" << name << " " << surname << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Mood: ";
        if (mood == 1)
            cout << "good\n";
        else
            cout << "bad\n";


    }
    void GetUp() const
    {
        cout << "Good morning to you\n";
    }
    void Sleep()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 40;
        cout << "You go to bed\n";
    }
    void Eat()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 20;
        cout << "You eating \n";
    }
    void Walk(Dog& dog)
    {
        if (energy > 20)
        {

            cout << "You go walking with your friend " << dog.GetName() << "\n";

            energy -= 20;
        }
    }

    void Feed(string meal, Dog dog)
    {
        int hun = 100;
        if (energy > 10)
        {

            if (dogs_meals[0] == meal)
            {

                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                    dog.SetHungry(hun += 20);

                dog.SayGav();
                dog.SayGav();

                cout << dog.GetName() << " eating\n";
            }

            else if (dogs_meals[1] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 10;
                    dog.SetHungry(hun);
                }

                dog.SayGav();
                cout << dog.GetName() << " started eating\n";
            }
            else if (dogs_meals[2] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 1;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " looked at you and ate you in disgust\n";
            }
            else if (dogs_meals[3] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 8;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << "started playing with it and ate it\n";
            }
            else if (dogs_meals[4] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 3;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " ate the food\n";
            }
            else if (dogs_meals[5] == meal)
            {
                if (hun == 100)
                {
                    hun = 100;
                    dog.SetHungry(hun);
                }
                else
                {
                    hun += 5;
                    dog.SetHungry(hun);
                }

                cout << dog.GetName() << " started beeping\n";
            }
            else
            {

                cout << dog.GetName() << " BBUUEEEE\n";
            }
            energy -= 10;
        }
    }
};

class Computer {
    

    int version;
    double price;
    string model;

    bool mech_keyboard;
    string color;
public:
    Computer()
    {
        SetVersion(123456);
        SetPrice(30000.543);
        SetModel("asus");
        SetMechKeyboard(false);
        SetColor("black");
      
    }
    Computer(double price, int version, string color, string model)
    {
        SetVersion(version);
        SetPrice(price);
        SetModel(model);
        SetMechKeyboard(false);
        SetColor(color);
    }
    void Print() const
    {
        
        cout << "Version:" << version << "\n";
        cout << "Model:" << model << "\n";
        cout << "Color:" << color << "\n";
        cout << "Price:" << price << "\n";
        cout << "Mechanic keyboard:";
        if (mech_keyboard)
        {
            cout << "yes\n";
        }
        else
            cout << "no\n";

    }
    void SetMechKeyboard(bool mech_keyboard)
    {
        this->mech_keyboard = mech_keyboard;
    }
    bool GetMechKeyboard() const
    {
        return mech_keyboard;
    }
    void SetColor(string color)
    {
        this->color = color;
    }
    string GetColor() const
    {
        return color;
    }
    void SetModel(string mmodel)
    {
        this->model = model;
    }
    string GetModel() const
    {
        return model;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 2000000)
            this->price = price;
        else
            throw "Error";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetVersion(int version)
    {
        this->version = version;
    }
    int GetVersoin() const
    {
        return version;
    }
    void Calculate(People& human)
    {
        int ener = human.GetEnergy();
        human.SetEnergy(ener -= 20);
        cout << "Computer start calculate math equation\n";
    }

    void SaveFiles() const
    {
        cout << "Files saves\n";
    }
    void DownloadGame() const
    {
        cout << "Computer almost download your game\n";
    }
    void MakeNoise(People& human)
    {
        human.SetMood(false);
        cout << "sssshhhhhhh\n";
    }

    void BreakDown(People& human)
    {
        human.SetMood(false);
        cout << "ops, computer kaput\n";
    }

    void SwitchIllumination(string color, People& human)
    {
        int ener = human.GetEnergy();
        if (human.GetEnergy() == 100)
            human.SetEnergy(100);
        else
        {
            ener += 5;
            human.SetEnergy(ener);
        }

        cout << "Illumination on keyboard\n";
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
        human.SetMood(true);

    }
    
};

class Juice {

    unsigned short line;
    double price;
    string title;
    string taste;

    bool fresh_made;
public:    
    Juice() 
    {
        SetLine(123);
        SetPrice(357.54);
        SetTitle("Jafa");
        SetTaste("Apple");
        SetFresh(false);
    }
    Juice(string title, double price, string taste, bool is_fresh)
    {
        SetLine(123);
        SetPrice(price);
        SetTitle(title);
        SetTaste(taste);
        SetFresh(is_fresh);
    }
    void Print() const
    {

        cout << "Title:" << title << "\n";
        cout << "Line:" << line << "\n";
        cout << "Taste:" << taste << "\n";
        cout << "Price:" << price << "\n";
        cout << "Fresh made:";
        if (fresh_made)
        {
            cout << "yes\n";
        }
        else
            cout << "no\n";

    }
    void SetTaste(string taste)
    {
        this->taste = taste;
    }
    string GetTaste() const
    {
        return taste;
    }
    void SetFresh(bool fresh_made)
    {
        this->fresh_made = fresh_made;
    }
    bool GetFresh() const
    {
        return fresh_made;
    }
    void SetTitle(string title)
    {
        this->title = title;
    }
    string GetTitle() const
    {
        return title;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 1000)
            this->price = price;
        else
            throw "Very expencive juice";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetLine(unsigned short line)
    {
        this->line = line;
    }
    unsigned short GetLine() const
    {
        return line;
    }
    void Overstay(People& human)
    {
        human.SetMood(true);
        cout << "this bad idea\n";
    }

    void BeTasty(People& human) const
    {

        int energy = human.GetEnergy();
        if (energy == 100)
        {
            energy = 100;
        }
        else
        {

            human.SetMood(true);
            cout << "delicious juice\n";
            energy += 15;
            human.SetEnergy(energy);
        }
    }

    void Evaporate(People& human) const
    {
        int energy = human.GetEnergy();
        human.SetMood(false);
        energy -= 5;
        human.SetEnergy(energy);
        cout << "juice is gone\n";
    }

    void MakeBubbles(People& human) const
    {
        human.SetMood(true);
        cout << "the juice looks delicious\n";
    }

    void BitSpilled(People& human)
    {
        int ener = human.GetEnergy();
        human.SetMood(false);
        ener -= 5;
        human.SetEnergy(ener);
        cout << "I am handyman(\n";
    }
};

class Lamp {

    int model;
    int line;
    double price;
    string color;
    string brand;
public:
    Lamp()
    {
        SetModel(123);
        SetLine(234212);
        SetPrice(200.45);
        SetColor("white");
        SetBrand("ldld");
    }
    Lamp(int model, string color, double price)
    {
        SetModel(model);
        SetLine(285739);
        SetPrice(price);
        SetColor(color);
        SetBrand("ldld");
    }
    void Print() const
    {

        cout << "Brand:" << brand << "\n";
        cout << "Line:" << line << "\n";
        cout << "Color:" << color << "\n";
        cout << "Price:" << price << "\n";
        cout << "Model:" << model << "\n";
        

    }
    void SetBrand(string brand)
    {
        this->brand = brand;
    }
    string GetBrand() const
    {
        return brand;
    }
    void SetColor(string color)
    {
        this->color = color;
    }
    string GetColor() const
    {
        return color;
    }
    void SetModel(int model)
    {
        this->model = model;
    }
    int GetModel() const
    {
        return model;
    }
    void SetPrice(double price)
    {
        if (price > 0 && price < 20000)
            this->price = price;
        else
            throw "Error";
    }
    double GetPrice() const
    {
        return price;
    }
    void SetLine(int line)
    {
        this->line = line;
    }
    int GetLine() const
    {
        return line;
    }
    void TurnOn() const
    {
        cout << "light on\n";
    }

    void TurnOf() const
    {
        cout << "light off\n";
    }


    void SelectLightColor(string color, People& human) const
    {
        int energy = human.GetEnergy();
        energy += 5;
        human.SetEnergy(energy);

        human.SetMood(true);
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
    }
    void BurnOut(People& human) const
    {
        human.SetMood(false);

        cout << "lamp burn out\n";
    }

    void BlowUp(People& human)
    {
        human.SetMood(false);
        int ener = human.GetEnergy();
        ener += 5;
        human.SetEnergy(ener);
        cout << "ops, bad lamp blew up\n";
    }
};

class Kino {

    double score;
    int count_coments;
    string appellation;
    string genre;
    string topic;

public:
    Kino()
    {
        SetScore(4.5);
        SetCountComents(60000000);
        SetAppellation("Star Wars");
        SetGenre("Fantasy");
        SetTopic("wars");
    }
    Kino(string appellation, string genre, string topic)
    {
        SetScore(4.5);
        SetCountComents(60000000);
        SetAppellation(appellation);
        SetGenre(genre);
        SetTopic(topic);
    }
    void Print() const
    {

        cout << "Title:" << appellation << "\n";
        cout << "Genre:" << genre << "\n";
        cout << "Score:" << score << "\n";
        cout << "Topic:" << topic << "\n";
        cout << "Count comments:" << count_coments << "\n";
        
    }
    void SetTopic(string topic)
    {
        this->topic = topic;
    }
    string GetTopic() const
    {
        return topic;
    }
    void SetGenre(string genre)
    {
        this->genre = genre;
    }
    string GetGenre() const
    {
        return genre;
    }
    void SetAppellation(string appellation)
    {
        this->appellation = appellation;
    }
    string GetAppellation() const
    {
        return appellation;
    }
    void SetCountComents(int count_coments)
    {
        this->count_coments = count_coments;
    }
    int GetCountComents() const
    {
        return count_coments;
    }
    void SetScore(double score)
    {
        this->score = score;
    }
    double GetScore() const
    {
        return score;
    }
    void MovieEntrance(People& human)
    {
        human.SetMood(false);
        cout << "date when we can see movie\n";
    }

    void RackBrain(People& human)
    {
        int ener = human.GetEnergy();
        if (ener != 100)
        {

            cout << "Film is difficult to brain\n";
            ener -= 15;
            human.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            human.SetEnergy(ener);
        }

    }

    void TellAdvertisement() const
    {
        cout << "Intresting film\n";
    }

    void EducatePeople(People& human)
    {
        int ener = human.GetEnergy();
        if (ener != 100)
        {

            cout << "Films about history\n";
            ener -= 10;
            human.SetEnergy(ener);
        }
        else
        {

            ener = 100;
            human.SetEnergy(ener);
        }

    }

    void UpliftMood(People& human) const
    {
        human.SetMood(true);
        cout << "Up lift your mood\n";
    }
};

int main()
{
    srand(time(0));
    People h(15, "elya", "varenyk");
    Dog d(55.5, "Avi", "doberman");
    Computer c(20000.500,12355,"black", "acer");
    Kino k("Spider Man", "Fantasy", "super hero");
    Lamp l(64583, "pink", 284);
    Juice j("Nash Sad", 65, "orange", false);
    k.SetGenre("Detective");
    string comand;
    string meal;
    string nick;
    string breed;
    string name;
    string surname;
  
    h.GetUp();
    d.GetUp();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    h.Walk(d);
    d.SayGav();
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    l.TurnOn();
    l.SelectLightColor("pink", h);
    c.Calculate(h);
    c.DownloadGame();
    l.BurnOut(h);
    d.SayGav();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    d.Licking(h.GetName());
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    d.Sleep();
    k.MovieEntrance(h);
    j.BeTasty(h);
    d.GetUp();
    d.Walking();
    k.TellAdvertisement();
    k.EducatePeople(h);
    d.SayGav();
    k.RackBrain(h);
    k.UpliftMood(h);
    d.SayGav();
    j.BitSpilled(h);
    c.MakeNoise(h);
    c.BreakDown(h);
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Sleep();
    h.Sleep();

    d.Print();
    h.Print();
    l.Print();
    c.Print();
    k.Print();
    j.Print();
}