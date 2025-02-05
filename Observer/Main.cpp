#include "Subject.h"
#include "Observer.h"

int main()
{
    Observer* observer1 = new Observer("observer-1");
    Observer* observer2 = new Observer("observer-2");
    Observer* observer3 = new Observer("observer-1");

    Subject* subject = new Subject;

    subject->AddObserver(observer1);
    subject->AddObserver(observer2);
    subject->AddObserver(observer3);

    subject->NotifyAll();

    delete observer1;
    delete observer2;
    delete observer3;

    delete subject;
}
