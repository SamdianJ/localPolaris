#include <iostream>
#include <vector>

enum deviceType
{
    cpuX86,
    cuda,
    opneGL,
    vulkan
}

enum transferDirection
{
    HostToDevice,
    DeviceToHost,
    DeviceToDevice,
    HostToHost
}

template <typename Type>
class storageBuffer
{
public:
    storageBuffer() = delete; // desallow defalut construction
    storageBuffer(label device = deviceType::cpuX86);
    storageBuffer(label size, label device = deviceType::cpuX86);
    storageBuffer(label size, Type& model, label device = deviceType::cpuX86);
    virtual ~storageBuffer();
    void printRawData();
    void printRawData(label printfirst = 10);
    void outputData(std::string path);
    Type* getDateRaw();
    bool Transfer(StorageBuffer<Type>& transfer, label direction = transferDirection::HostToHost);
    bool Resize(label size);
    bool Push(Type value);
    static bool Merge(StorageBuffer<Type>& prev, StorageBuffer<Type>& destination); // Merge two buffers
    
protected:
    Type* dataRaw; // ptr to the raw data
    label position; // indicate this storage sites at which divice
    label size; // real size
    label buffersize; // buffer size is slightly larger than the real size
    label bandwidth; // size of each value
    label storageSize; // storage size is calculated from the buffer size instead of the real size
}

typedef StorageBuffer<real> realHandle;

template <typename Type>
class coordinate
{
public:
    coordinate();
    coordinate(const coordinate& model);

private:
    std::vector<>
}

class cloud
{

}



class point
{
public:
    point();
    virtual ~point();


}