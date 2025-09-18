/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5459
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5459
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
void test(val<signed char> var_0, val<int> var_1, val<int> var_2, val<bool> var_3, val<int> var_4, val<signed char> var_8, val<unsigned int> var_9, val<unsigned char> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned char*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) var_2)) : (20ULL)))) ? (((((/* implicit */val<bool>) -1617229375)) ? (((/* implicit */val<int>) var_11)) : (var_4))) : (((((/* implicit */val<bool>) -1040056055)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<unsigned char>)186))))))) ? (((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)187))))) ? ((+(((/* implicit */val<int>) var_10)))) : ((((val<bool>)1) ? (((/* implicit */val<int>) var_0)) : (var_2))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) var_2)) : (var_9)))) ? ((~(((/* implicit */val<int>) (val<bool>)1)))) : (((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<int>) (val<unsigned char>)225))))))));
    *var_17 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_3))))) ? ((~(-1705842685))) : (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<bool>)1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
int var_1 = -907569916;
int var_2 = 546230122;
bool var_3 = (bool)1;
int var_4 = -1330031222;
signed char var_8 = (signed char)68;
unsigned int var_9 = 1979012465U;
unsigned char var_10 = (unsigned char)18;
unsigned short var_11 = (unsigned short)12042;
int zero = 0;
unsigned char var_16 = (unsigned char)160;
short var_17 = (short)-3377;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)18;
    value_mismatch |= var_17 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_8, var_9, var_10, var_11, zero, &var_16, &var_17);
  checksum();
}
