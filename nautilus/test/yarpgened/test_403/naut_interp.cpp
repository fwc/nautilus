/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 403
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=403
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_4, val<int> zero, val<unsigned short*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) (val<unsigned char>)133);
    *var_14 = ((/* implicit */val<int>) (((-(((((/* implicit */val<bool>) var_0)) ? (var_4) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)(-32767 - 1)))))))) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) (!(((/* implicit */val<bool>) (val<signed char>)69)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37462;
unsigned long long int var_4 = 1834519512742326225ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)60542;
int var_14 = -1001845518;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)133;
    value_mismatch |= var_14 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
