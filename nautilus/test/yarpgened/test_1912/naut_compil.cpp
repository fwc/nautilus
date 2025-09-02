/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1912
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1912
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
void test(val<unsigned int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_4, val<short> var_7, val<long long int> var_8, val<unsigned short> var_10, val<int> zero, val<bool*> var_12, val<short*> var_13, val<unsigned long long int*> var_14, val<bool*> var_15) {
    *var_12 = ((((max((((/* implicit */val<long long int>) var_0)), (var_8))) | (((/* implicit */val<long long int>) var_1)))) == (((val<long long int>) var_0)));
    *var_13 = (val<short>)9393;
    *var_14 |= ((/* implicit */val<unsigned long long int>) var_10);
    *var_15 *= ((var_4) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1538726956U;
unsigned int var_1 = 1630601109U;
unsigned long long int var_4 = 3556862041333398173ULL;
short var_7 = (short)6826;
long long int var_8 = 1654432620263437763LL;
unsigned short var_10 = (unsigned short)2521;
int zero = 0;
bool var_12 = (bool)1;
short var_13 = (short)19985;
unsigned long long int var_14 = 919658750496309473ULL;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (short)9393;
    value_mismatch |= var_14 != 919658750496311801ULL;
    value_mismatch |= var_15 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_7, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
