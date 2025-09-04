/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8082
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8082
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
void test(val<int> var_0, val<bool> var_12, val<int> zero, val<unsigned long long int*> var_14, val<long long int*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) (!(((((/* implicit */val<bool>) (-2147483647 - 1))) || (((/* implicit */val<bool>) var_0))))))), (min((3341163792U), (((/* implicit */val<unsigned int>) (val<bool>)1))))));
    *var_15 = ((/* implicit */val<long long int>) (+(min((((((/* implicit */val<bool>) 1869682708477518898ULL)) ? (-1) : (((/* implicit */val<int>) (val<unsigned char>)143)))), (((var_12) ? (((/* implicit */val<int>) (val<unsigned short>)53487)) : (((/* implicit */val<int>) var_12))))))));
    *var_16 |= ((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) min((663531390), (-18))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2033515154;
bool var_12 = (bool)1;
int zero = 0;
unsigned long long int var_14 = 11050544431266496486ULL;
long long int var_15 = 1247603297749204279LL;
int var_16 = -1538441720;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1ULL;
    value_mismatch |= var_15 != -1LL;
    value_mismatch |= var_16 != -1538441719;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
