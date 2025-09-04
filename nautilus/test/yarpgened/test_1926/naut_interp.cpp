/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1926
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
void test(val<unsigned int> var_1, val<unsigned char> var_7, val<short> var_10, val<unsigned char> var_19, val<int> zero, val<unsigned int*> var_20, val<short*> var_21, val<long long int*> var_22) {
    *var_20 = var_1;
    *var_21 = ((/* implicit */val<short>) var_7);
    *var_22 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_19)), ((~(((/* implicit */val<int>) min((var_10), (var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2017005955U;
unsigned char var_7 = (unsigned char)132;
short var_10 = (short)30875;
unsigned char var_19 = (unsigned char)220;
int zero = 0;
unsigned int var_20 = 2342702727U;
short var_21 = (short)9431;
long long int var_22 = -3145576457153053897LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2017005955U;
    value_mismatch |= var_21 != (short)132;
    value_mismatch |= var_22 != 220LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_10, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
