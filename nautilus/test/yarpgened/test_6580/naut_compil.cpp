/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6580
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6580
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
void test(val<long long int> var_3, val<unsigned int> var_4, val<long long int> var_5, val<int> zero, val<bool*> var_11, val<int*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_11 ^= ((/* implicit */val<bool>) var_3);
    *var_12 = ((/* implicit */val<int>) var_4);
    *var_13 &= ((/* implicit */val<bool>) var_5);
    *var_14 = ((/* implicit */val<unsigned char>) min(((((val<bool>)1) ? (13363392810400254968ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned long long int>) 2026235577U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1441807448595730047LL;
unsigned int var_4 = 1229182974U;
long long int var_5 = 7034801844208635286LL;
int zero = 0;
bool var_11 = (bool)0;
int var_12 = 289508549;
bool var_13 = (bool)1;
unsigned char var_14 = (unsigned char)93;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1229182974;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned char)185;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
