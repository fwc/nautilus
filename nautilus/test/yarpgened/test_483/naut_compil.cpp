/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 483
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=483
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
void test(val<signed char> var_0, val<unsigned short> var_7, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 ^= ((/* implicit */val<unsigned short>) (~((((~(((/* implicit */val<int>) var_7)))) - (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<bool>)0)), ((val<unsigned short>)22930))))))));
    *var_14 |= ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned short var_7 = (unsigned short)17290;
int zero = 0;
unsigned short var_13 = (unsigned short)6844;
unsigned short var_14 = (unsigned short)62221;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)22838;
    value_mismatch |= var_14 != (unsigned short)65487;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
