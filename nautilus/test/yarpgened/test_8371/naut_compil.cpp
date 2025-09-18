/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8371
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8371
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
void test(val<unsigned int> var_0, val<unsigned char> var_8, val<int> zero, val<short*> var_10, val<unsigned long long int*> var_11, val<long long int*> var_12) {
    *var_10 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) -186100842)) / (((((/* implicit */val<bool>) var_0)) ? ((+(13561486071481057256ULL))) : (((/* implicit */val<unsigned long long int>) min((-186100842), (-178554500))))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_8))));
    *var_12 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1160596124U;
unsigned char var_8 = (unsigned char)52;
int zero = 0;
short var_10 = (short)-6691;
unsigned long long int var_11 = 11633547831813310165ULL;
long long int var_12 = 6334131291396346679LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)1;
    value_mismatch |= var_11 != 18446744073709551563ULL;
    value_mismatch |= var_12 != 52LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
}
