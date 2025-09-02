/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4174
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4174
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_8, val<int> zero, val<long long int*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_17 = ((/* implicit */val<long long int>) ((val<unsigned long long int>) ((val<int>) ((val<unsigned char>) (val<unsigned char>)109))));
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) ((val<int>) ((val<int>) ((val<long long int>) var_8)))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((val<bool>) ((val<unsigned char>) ((val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13678114431596473579ULL;
unsigned char var_8 = (unsigned char)149;
int zero = 0;
long long int var_17 = -5105589712575049014LL;
unsigned char var_18 = (unsigned char)130;
unsigned char var_19 = (unsigned char)38;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 109LL;
    value_mismatch |= var_18 != (unsigned char)149;
    value_mismatch |= var_19 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
