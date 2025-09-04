/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5357
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5357
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
void test(val<long long int> var_4, val<long long int> var_7, val<bool> var_12, val<int> var_13, val<int> zero, val<short*> var_18, val<int*> var_19, val<unsigned short*> var_20) {
    *var_18 = ((/* implicit */val<short>) var_4);
    *var_19 = (~(((/* implicit */val<int>) ((val<unsigned char>) (val<signed char>)119))));
    *var_20 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) min((((/* implicit */val<long long int>) (!(var_12)))), (((((/* implicit */val<bool>) var_13)) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)15))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -850600272193634566LL;
long long int var_7 = 5325603243701448724LL;
bool var_12 = (bool)0;
int var_13 = -199075643;
int zero = 0;
short var_18 = (short)-26051;
int var_19 = 1754392283;
unsigned short var_20 = (unsigned short)8649;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)16122;
    value_mismatch |= var_19 != -120;
    value_mismatch |= var_20 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_12, var_13, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
