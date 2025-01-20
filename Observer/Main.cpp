#include "Subject.h"
#include "Observer.h"

int main()
{
    Subject subject;

    Observer observer1("observer-1");
    Observer observer2("observer-2");
    Observer observer3("observer-1");

    subject.AddObserver(&observer1);
    subject.AddObserver(&observer2);
    subject.AddObserver(&observer3);

    subject.NotifyAll();
}
