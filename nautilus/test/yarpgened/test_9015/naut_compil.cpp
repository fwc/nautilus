/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9015
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9015
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
void test(val<unsigned long long int> var_6, val<signed char> var_8, val<unsigned long long int> var_9, val<bool> var_10, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16, val<unsigned short*> var_17, val<int*> var_18) {
    *var_14 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_8))));
    *var_15 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) (~(((/* implicit */val<int>) var_10)))));
    *var_16 = (-((+(var_6))));
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 9969723507985314784ULL)) ? (9969723507985314768ULL) : (var_9)));
    *var_18 = ((/* implicit */val<int>) ((val<unsigned short>) var_9));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3865648112825560999ULL;
signed char var_8 = (signed char)12;
unsigned long long int var_9 = 146144881312947875ULL;
bool var_10 = (bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)197;
unsigned short var_15 = (unsigned short)10283;
unsigned long long int var_16 = 8784727571762506766ULL;
unsigned short var_17 = (unsigned short)23563;
int var_18 = 266365508;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)244;
    value_mismatch |= var_15 != (unsigned short)65534;
    value_mismatch |= var_16 != 14581095960883990617ULL;
    value_mismatch |= var_17 != (unsigned short)29648;
    value_mismatch |= var_18 != 24227;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_9, var_10, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
