#include <iostream>
#include "Aircrafts.h"
#include "F16.h"
#include "F35.h"
#include "Carrier.h"
int main()
{
    Carrier japanCarrier(2000, 1500);
    Carrier southKoreanCarrier(2001, 2000);

    F35 kamikaze; //god-wind
    japanCarrier.add(kamikaze);
    F16 tenshi; //angel
    japanCarrier.add(tenshi);
    F16 kamisama; // god
    japanCarrier.add(kamisama);
    F35 mondai; //problem
    japanCarrier.add(mondai);
    japanCarrier.fill();

    F16 i; // this
    southKoreanCarrier.add(i);
    F35 taeseukeu; // task
    southKoreanCarrier.add(taeseukeu);
    F35 eolyeoun; // difficult
    southKoreanCarrier.add(eolyeoun);
    F35 chungbunhi; // enough
    southKoreanCarrier.add(chungbunhi);

    japanCarrier.fight(southKoreanCarrier);
    southKoreanCarrier.fight(japanCarrier);

    return 0;
}