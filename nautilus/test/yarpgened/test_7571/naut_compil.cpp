/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7571
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7571
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
void test(val<unsigned int> var_2, val<signed char> var_5, val<signed char> var_6, val<bool> var_8, val<long long int> var_9, val<int> zero, val<bool*> var_12, val<short*> var_13, val<unsigned long long int*> var_14) {
    *var_12 = (val<bool>)1;
    *var_13 = ((/* implicit */val<short>) var_9);
    *var_14 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) ((val<unsigned short>) var_5))) : (((/* implicit */val<int>) var_8)))) & (((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3763173441U;
signed char var_5 = (signed char)15;
signed char var_6 = (signed char)80;
bool var_8 = (bool)1;
long long int var_9 = 8718241730826706984LL;
int zero = 0;
bool var_12 = (bool)0;
short var_13 = (short)19306;
unsigned long long int var_14 = 14344427200036813241ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != (short)-24536;
    value_mismatch |= var_14 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_8, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
