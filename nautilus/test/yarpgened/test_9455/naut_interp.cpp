/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9455
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9455
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
void test(val<signed char> var_4, val<short> var_6, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18, val<bool*> var_19) {
    *var_17 = ((/* implicit */val<unsigned short>) min((*var_17), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (val<signed char>)110)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<signed char>)-117)))))));
    *var_18 += ((/* implicit */val<unsigned short>) (+((~(min((15720606426890515978ULL), (((/* implicit */val<unsigned long long int>) var_6))))))));
    *var_19 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-12;
short var_6 = (short)-27418;
int zero = 0;
unsigned short var_17 = (unsigned short)62699;
unsigned short var_18 = (unsigned short)36406;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)1;
    value_mismatch |= var_18 != (unsigned short)22571;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
