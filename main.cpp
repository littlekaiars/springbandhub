#include <string>
#include <vector>

void half_value() {
    int x = 85;
    int half = x / 2;
    (void)half;
}

void vector_max() {
    std::vector<int> values;
    values.push_back(11);
    values.push_back(29);
    values.push_back(7);
    int best = values[0];
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i] > best) best = values[i];
    }
    (void)best;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

void pick_max() {
    int a = 17, b = 42, c = 8;
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    (void)m;
}

extern "C" int silver_orbit();
extern "C" void silver_beacon();
extern "C" void placid_crescent();
extern "C" void lunar_cove();

int main() {
    half_value();
    vector_max();
    leading_zeros();
    pick_max();
    silver_beacon();
    placid_crescent();
    lunar_cove();
    return silver_orbit();
}
