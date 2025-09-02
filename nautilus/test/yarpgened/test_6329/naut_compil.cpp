/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6329
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6329
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
void test(val<unsigned int> var_4, val<short> var_6, val<int> var_7, val<int> zero, val<bool*> var_10, val<short*> var_11) {
    *var_10 &= ((/* implicit */val<bool>) (+(var_4)));
    *var_11 *= ((/* implicit */val<short>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 828129057314919095LL)) ? (var_7) : (((/* implicit */val<int>) var_6))))) || (((/* implicit */val<bool>) ((val<short>) 2048172992U))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3901630218U;
short var_6 = (short)-27335;
int var_7 = -172400572;
int zero = 0;
bool var_10 = (bool)1;
short var_11 = (short)8255;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (short)-8255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
