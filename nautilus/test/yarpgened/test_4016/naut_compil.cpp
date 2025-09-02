/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4016
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4016
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
void test(val<unsigned long long int> var_9, val<unsigned short> var_10, val<unsigned char> var_11, val<int> zero, val<bool*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<bool>) var_10);
    *var_13 -= ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9)))))) ^ (((((/* implicit */val<bool>) (val<unsigned char>)253)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (5799747758789220880ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 17107110209981819385ULL;
unsigned short var_10 = (unsigned short)47957;
unsigned char var_11 = (unsigned char)12;
int zero = 0;
bool var_12 = (bool)1;
long long int var_13 = 8680222039827533535LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 8680222039827533523LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
