/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 674
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=674
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
void test(val<long long int> var_0, val<bool> var_1, val<short> var_3, val<long long int> var_7, val<unsigned char> var_9, val<unsigned int> var_11, val<short> var_15, val<int> zero, val<long long int*> var_16, val<short*> var_17, val<long long int*> var_18, val<long long int*> var_19) {
    *var_16 = var_7;
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_9)), ((-(((/* implicit */val<int>) (val<unsigned short>)851))))))) > ((~(((((/* implicit */val<bool>) 4294967295U)) ? (-7838058883544589635LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)851)))))))));
    *var_18 = ((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((((val<int>) var_11)) == (((/* implicit */val<int>) var_3))))), (((((/* implicit */val<bool>) ((val<long long int>) var_1))) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) var_9))))))));
    *var_19 = ((/* implicit */val<long long int>) ((((((((/* implicit */val<bool>) var_0)) ? (17U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))))) >> (((1729382256910270464LL) - (1729382256910270434LL))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) > (-3686389380347990634LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5234065022015309764LL;
bool var_1 = (bool)1;
short var_3 = (short)-7021;
long long int var_7 = -8347053548887798133LL;
unsigned char var_9 = (unsigned char)141;
unsigned int var_11 = 1899641643U;
short var_15 = (short)21801;
int zero = 0;
long long int var_16 = -7286877074663311464LL;
short var_17 = (short)-15323;
long long int var_18 = -3015355866601563742LL;
long long int var_19 = -8754342871827000354LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -8347053548887798133LL;
    value_mismatch |= var_17 != (short)0;
    value_mismatch |= var_18 != 0LL;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, var_9, var_11, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
