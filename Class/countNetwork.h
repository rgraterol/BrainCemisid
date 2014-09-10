 #ifndef COUNTNETWORK_H
#define COUNTNETWORK_H
#define  SIZE_CHARACTERISTIC 32
#define  SIZE_FLAGS          9
#define SIZE_MAXCOUNTNEURONS 10;

struct CountNetwork {
    unsigned char * vectorNetworkCount;
    unsigned char * vectorPointerCount;

    unsigned char * vectorFlagsCount;
    unsigned char * ptr;
    unsigned char * binaryCharacteristicCount;

};


struct OrderNetwork {

    CountNetwork * countNet;
    unsigned char * vectorNetworkOrder;
    unsigned char * category;
};


struct SizeOrderNet{
    unsigned int numNeuronCount;
};


#endif // COUNTNETWORK_H
