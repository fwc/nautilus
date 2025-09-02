/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1382
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1382
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_3, val<short> var_5, val<bool> var_6, val<short> var_9, val<int> var_10, val<bool> var_11, val<short> var_13, val<long long int> var_14, val<int> zero, val<bool*> var_16, val<unsigned char*> var_17, val<short*> var_18, val<bool*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21) {
    *var_16 = ((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) (val<short>)29431)), (4294967295U)));
    *var_17 += ((/* implicit */val<unsigned char>) (~(var_2)));
    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) max((var_5), (var_13)))) ? (((/* implicit */val<unsigned long long int>) ((4294967295U) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) : (var_3))) - (((/* implicit */val<unsigned long long int>) var_14)))))
    {
        *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) var_6))));
        *var_19 -= ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) (+(((((/* implicit */val<int>) var_11)) * (var_10)))))) * (((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<long long int>) var_1)) : (var_14))) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))));
        *var_20 += ((/* implicit */val<unsigned short>) var_1);
        *var_21 = (-(var_3));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3392704831U;
unsigned long long int var_2 = 2041335399581656493ULL;
unsigned long long int var_3 = 7172300401932060827ULL;
short var_5 = (short)30970;
bool var_6 = (bool)1;
short var_9 = (short)-19596;
int var_10 = 2117595293;
bool var_11 = (bool)1;
short var_13 = (short)26877;
long long int var_14 = 8473668736733248517LL;
int zero = 0;
bool var_16 = (bool)1;
unsigned char var_17 = (unsigned char)121;
short var_18 = (short)-19214;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)58146;
unsigned long long int var_21 = 17273322731050390998ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != (unsigned char)203;
    value_mismatch |= var_18 != (short)1;
    value_mismatch |= var_19 != (bool)0;
    value_mismatch |= var_20 != (unsigned short)29793;
    value_mismatch |= var_21 != 11274443671777490789ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_9, var_10, var_11, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
