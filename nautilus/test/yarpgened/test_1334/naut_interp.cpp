/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1334
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1334
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
void test(val<signed char> var_8, val<unsigned short> var_10, val<int> var_11, val<int> zero, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned short>) var_11);
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_10)) & (((/* implicit */val<int>) ((val<bool>) ((0ULL) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-4;
unsigned short var_10 = (unsigned short)35297;
int var_11 = -583602218;
int zero = 0;
unsigned short var_15 = (unsigned short)54457;
long long int var_16 = 8298424864212027297LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)61398;
    value_mismatch |= var_16 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
