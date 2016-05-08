//static const int TABLE_SIZE = 6151;
static const int TABLE_SIZE = 100;

// Default hash function class
template <typename K>
struct KeyHash {
    unsigned long operator()(const K& key) const
    {
        return reinterpret_cast<unsigned long>(key) % TABLE_SIZE;
    }
};
