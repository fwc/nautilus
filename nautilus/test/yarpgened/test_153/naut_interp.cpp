/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 153
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=153
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
void test(val<signed char> var_7, val<unsigned long long int> var_12, val<short> var_13, val<unsigned short> var_15, val<int> zero, val<int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<int>) (+(((((/* implicit */val<bool>) var_7)) ? (((var_12) / (((/* implicit */val<unsigned long long int>) 2097151LL)))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15)))))));
    *var_21 -= ((/* implicit */val<long long int>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)40;
unsigned long long int var_12 = 9064188157426961752ULL;
short var_13 = (short)11789;
unsigned short var_15 = (unsigned short)5980;
int zero = 0;
int var_20 = -1149889668;
long long int var_21 = -1553510114881041264LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1406683588;
    value_mismatch |= var_21 != -1553510114881053053LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_12, var_13, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
