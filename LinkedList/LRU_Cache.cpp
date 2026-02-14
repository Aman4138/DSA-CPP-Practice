class LRUCache {
public:
    list<int> dll;
    unordered_map<int, pair<int, list<int>::iterator>> mp;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        dll.erase(mp[key].second);
        dll.push_front(key);
        mp[key].second = dll.begin();

        return mp[key].first;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {
            dll.erase(mp[key].second);
        }
        else if (dll.size() == cap) {
            int last = dll.back();
            dll.pop_back();
            mp.erase(last);
        }

        dll.push_front(key);
        mp[key] = {value, dll.begin()};
    }
};
