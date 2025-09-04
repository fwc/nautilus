/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4029
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4029
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
void test(val<unsigned short> var_0, val<long long int> var_1, val<unsigned short> var_4, val<long long int> var_6, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned char>) min((*var_16), (((/* implicit */val<unsigned char>) var_0))));
    *var_17 = ((/* implicit */val<unsigned char>) var_4);
    *var_18 = ((/* implicit */val<signed char>) ((var_6) < (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59100;
long long int var_1 = 8295478914411169012LL;
unsigned short var_4 = (unsigned short)51861;
long long int var_6 = -8309932658716896647LL;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
unsigned char var_17 = (unsigned char)122;
signed char var_18 = (signed char)52;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)132;
    value_mismatch |= var_17 != (unsigned char)149;
    value_mismatch |= var_18 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
