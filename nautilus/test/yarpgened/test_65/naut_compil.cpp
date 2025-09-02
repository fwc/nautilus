/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 65
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=65
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
void test(val<unsigned char> var_2, val<bool> var_6, val<long long int> var_7, val<unsigned short> var_8, val<unsigned char> var_13, val<int> zero, val<unsigned int*> var_18, val<signed char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) (~(((((((/* implicit */val<int>) var_6)) * (((/* implicit */val<int>) var_2)))) * ((+(((/* implicit */val<int>) var_13))))))));
    *var_19 = ((/* implicit */val<signed char>) min((var_7), (((/* implicit */val<long long int>) max((((/* implicit */val<unsigned short>) var_6)), (var_8))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)77;
bool var_6 = (bool)0;
long long int var_7 = 4232244412725215615LL;
unsigned short var_8 = (unsigned short)58158;
unsigned char var_13 = (unsigned char)96;
int zero = 0;
unsigned int var_18 = 544786337U;
signed char var_19 = (signed char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294967295U;
    value_mismatch |= var_19 != (signed char)46;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_8, var_13, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
