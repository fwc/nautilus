/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3574
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3574
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
void test(val<unsigned int> var_13, val<unsigned char> var_18, val<int> zero, val<signed char*> var_19, val<int*> var_20) {
    *var_19 = ((/* implicit */val<signed char>) var_13);
    *var_20 = ((/* implicit */val<int>) ((((val<bool>) ((val<long long int>) var_18))) && (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 0)) ? (((/* implicit */val<unsigned long long int>) 2874351933904451053LL)) : (10569583402082919599ULL))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)9025))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 1662387857U;
unsigned char var_18 = (unsigned char)138;
int zero = 0;
signed char var_19 = (signed char)7;
int var_20 = -274297342;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-111;
    value_mismatch |= var_20 != 1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_18, zero, &var_19, &var_20);
  checksum();
}
