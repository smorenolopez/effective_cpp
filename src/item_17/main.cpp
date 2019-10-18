#include <iostream>
#include <memory>

class Widget
{
private:
    std::string name;

public:
    Widget() {
        name = "default";
        std::cout << "In the constructor" << std::endl;
    }
    ~Widget() {
        std::cout << "In the destructor" << std::endl;
    }
    Widget(Widget &w) { name = w.getName(); }
    Widget operator=(const Widget &w) { name = w.getName(); }

    std::string getName() const {return name;}
};

void processWidget(std::shared_ptr<Widget> shWidget);

int main() {
    std::shared_ptr<Widget> localSharedWidget(new Widget());
    processWidget(localSharedWidget);
    return 0;
}

void processWidget(std::shared_ptr<Widget> shWidget)
{
    std::cout << "Widget's name: " << shWidget->getName() << std::endl;
}