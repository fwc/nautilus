/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8284
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8284
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
void test(val<short> var_1, val<int> var_6, val<short> var_8, val<int> zero, val<unsigned char*> var_14, val<unsigned int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) min(((+(((/* implicit */val<int>) (val<unsigned short>)11761)))), ((~(((/* implicit */val<int>) max((var_1), (var_8))))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))) < (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)53778))) % (279872395U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11113;
int var_6 = -492404479;
short var_8 = (short)19994;
int zero = 0;
unsigned char var_14 = (unsigned char)96;
unsigned int var_15 = 328061550U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)229;
    value_mismatch |= var_15 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
