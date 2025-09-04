/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1772
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<bool> var_5, val<short> var_6, val<long long int> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned int*> var_10, val<signed char*> var_11, val<int*> var_12, val<signed char*> var_13, val<signed char*> var_14, val<signed char*> var_15, val<unsigned long long int*> var_16) {
    *var_10 = ((/* implicit */val<unsigned int>) var_1);
    if (((/* implicit */val<bool>) (((+(min((((/* implicit */val<unsigned long long int>) var_6)), (var_9))))) - (((/* implicit */val<unsigned long long int>) (-(min((12), (((/* implicit */val<int>) (val<short>)-5112))))))))))
    {
        *var_11 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_8))));
        *var_12 = ((/* implicit */val<int>) (+(var_3)));
    }
    else
    {
        *var_13 = ((/* implicit */val<signed char>) var_5);
        *var_14 = ((/* implicit */val<signed char>) (val<unsigned short>)65535);
        *var_15 = ((/* implicit */val<signed char>) -2068073929);
        *var_16 = ((/* implicit */val<unsigned long long int>) (val<unsigned short>)7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
unsigned long long int var_3 = 9699187001594367764ULL;
bool var_5 = (bool)1;
short var_6 = (short)-17058;
long long int var_8 = 5345425843392909818LL;
unsigned long long int var_9 = 8722120182752972029ULL;
int zero = 0;
unsigned int var_10 = 959121919U;
signed char var_11 = (signed char)-24;
int var_12 = 219493645;
signed char var_13 = (signed char)111;
signed char var_14 = (signed char)-43;
signed char var_15 = (signed char)-34;
unsigned long long int var_16 = 14647271980138104024ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 4294967284U;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != -2145497324;
    value_mismatch |= var_13 != (signed char)111;
    value_mismatch |= var_14 != (signed char)-43;
    value_mismatch |= var_15 != (signed char)-34;
    value_mismatch |= var_16 != 14647271980138104024ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
