/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3262
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3262
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
void test(val<int> zero, val<long long int*> var_19, val<short*> var_20, val<bool*> var_21) {
    *var_19 -= ((/* implicit */val<long long int>) ((((8629520384692448394LL) ^ (8629520384692448394LL))) == (((-8629520384692448395LL) / (((8629520384692448401LL) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)61737)))))))));
    *var_20 = ((/* implicit */val<short>) (val<bool>)1);
    *var_21 = ((/* implicit */val<bool>) ((-3572337379862450029LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)3799)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_19 = 1699443937700249529LL;
short var_20 = (short)-2527;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1699443937700249529LL;
    value_mismatch |= var_20 != (short)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
