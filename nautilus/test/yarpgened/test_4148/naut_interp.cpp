/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4148
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4148
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
void test(val<int> var_1, val<long long int> var_6, val<int> var_11, val<int> zero, val<int*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_14 |= ((/* implicit */val<int>) ((val<signed char>) (+(var_6))));
    *var_15 = ((/* implicit */val<unsigned short>) var_1);
    *var_16 = ((/* implicit */val<long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1572319120;
long long int var_6 = -31517631147766343LL;
int var_11 = -316249854;
int zero = 0;
int var_14 = -270918640;
unsigned short var_15 = (unsigned short)17403;
long long int var_16 = 6081653635742316558LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -71;
    value_mismatch |= var_15 != (unsigned short)20592;
    value_mismatch |= var_16 != -316249854LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
