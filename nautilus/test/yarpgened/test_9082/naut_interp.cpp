/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9082
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9082
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
void test(val<unsigned short> var_0, val<unsigned int> var_5, val<unsigned long long int> var_7, val<bool> var_9, val<long long int> var_10, val<int> zero, val<unsigned short*> var_13, val<int*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_9)) << ((((~(((/* implicit */val<int>) var_0)))) + (8044)))))) | (var_7)));
    *var_14 = ((/* implicit */val<int>) var_7);
    *var_15 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) var_5)), ((-(max((7736044622663368397ULL), (((/* implicit */val<unsigned long long int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8040;
unsigned int var_5 = 1039130547U;
unsigned long long int var_7 = 17261799943963578608ULL;
bool var_9 = (bool)1;
long long int var_10 = -3212880230371485316LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10774;
int var_14 = 1023395545;
unsigned short var_15 = (unsigned short)27067;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)37112;
    value_mismatch |= var_14 != -1815179024;
    value_mismatch |= var_15 != (unsigned short)57267;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, var_9, var_10, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
