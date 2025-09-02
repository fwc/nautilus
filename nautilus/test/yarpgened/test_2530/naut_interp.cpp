/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2530
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2530
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
void test(val<long long int> var_1, val<bool> var_6, val<int> zero, val<unsigned short*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) ((val<bool>) (+(((/* implicit */val<int>) ((var_1) <= (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))))));
    *var_12 = ((/* implicit */val<signed char>) (~((+((+(104864307)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1079910358968631743LL;
bool var_6 = (bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)27875;
signed char var_12 = (signed char)-46;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != (signed char)-52;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
