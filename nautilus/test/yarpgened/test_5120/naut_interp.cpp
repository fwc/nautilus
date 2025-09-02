/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5120
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5120
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
void test(val<unsigned char> var_8, val<int> var_15, val<int> var_17, val<int> zero, val<int*> var_19, val<int*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((var_15) - ((+(((/* implicit */val<int>) var_8)))));
    *var_20 = var_17;
    *var_21 &= ((/* implicit */val<unsigned char>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)167;
int var_15 = 1221896941;
int var_17 = -1304862972;
int zero = 0;
int var_19 = -1782081789;
int var_20 = 1576874492;
unsigned char var_21 = (unsigned char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1221896774;
    value_mismatch |= var_20 != -1304862972;
    value_mismatch |= var_21 != (unsigned char)9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_15, var_17, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
