/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8874
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8874
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
void test(val<short> var_5, val<short> var_6, val<unsigned char> var_11, val<int> zero, val<signed char*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) max((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_11))))), (((val<unsigned int>) var_5))))), (((val<long long int>) (!(((/* implicit */val<bool>) var_6)))))));
    *var_18 += ((/* implicit */val<unsigned short>) (~(721221924U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-13357;
short var_6 = (short)-10601;
unsigned char var_11 = (unsigned char)40;
int zero = 0;
signed char var_17 = (signed char)101;
unsigned short var_18 = (unsigned short)32058;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)-45;
    value_mismatch |= var_18 != (unsigned short)33813;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
