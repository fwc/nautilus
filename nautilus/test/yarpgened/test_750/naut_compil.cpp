/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 750
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=750
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
void test(val<short> var_9, val<int> zero, val<long long int*> var_20, val<unsigned char*> var_21, val<long long int*> var_22) {
    *var_20 *= ((/* implicit */val<long long int>) ((val<unsigned long long int>) (val<bool>)1));
    *var_21 = ((/* implicit */val<unsigned char>) var_9);
    *var_22 = ((/* implicit */val<long long int>) 15625370328314222063ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)12030;
int zero = 0;
long long int var_20 = 5350548926186654497LL;
unsigned char var_21 = (unsigned char)169;
long long int var_22 = -7007540267058008893LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 5350548926186654497LL;
    value_mismatch |= var_21 != (unsigned char)254;
    value_mismatch |= var_22 != -2821373745395329553LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_20, &var_21, &var_22);
  checksum();
}
