/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 442
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=442
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
void test(val<unsigned long long int> var_4, val<unsigned char> var_9, val<int> zero, val<unsigned long long int*> var_17, val<signed char*> var_18, val<signed char*> var_19) {
    *var_17 = var_4;
    *var_18 = ((/* implicit */val<signed char>) ((val<unsigned int>) max((var_4), (((/* implicit */val<unsigned long long int>) (val<signed char>)95)))));
    *var_19 += ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17249926308536088976ULL;
unsigned char var_9 = (unsigned char)191;
int zero = 0;
unsigned long long int var_17 = 3889294111189827218ULL;
signed char var_18 = (signed char)92;
signed char var_19 = (signed char)77;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 17249926308536088976ULL;
    value_mismatch |= var_18 != (signed char)-112;
    value_mismatch |= var_19 != (signed char)12;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_9, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
