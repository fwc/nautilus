/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7903
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7903
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
void test(val<unsigned char> var_0, val<long long int> var_5, val<unsigned char> var_8, val<int> zero, val<bool*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned char>) ((11949501758708813651ULL) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)0)))))), ((val<unsigned char>)255)));
    *var_16 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
long long int var_5 = -8145558190023332514LL;
unsigned char var_8 = (unsigned char)248;
int zero = 0;
bool var_15 = (bool)1;
short var_16 = (short)23062;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (short)16;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
