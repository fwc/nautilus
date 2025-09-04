/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9972
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9972
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
void test(val<unsigned char> var_2, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)209);
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) (+((-((+(780965170U))))))))));
    *var_16 = ((/* implicit */val<unsigned short>) max(((+(((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)161))))), ((~(((/* implicit */val<int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
int zero = 0;
unsigned long long int var_14 = 13410807576491704624ULL;
unsigned long long int var_15 = 14333007833904213979ULL;
unsigned short var_16 = (unsigned short)99;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 209ULL;
    value_mismatch |= var_15 != 14333007833904213979ULL;
    value_mismatch |= var_16 != (unsigned short)161;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
