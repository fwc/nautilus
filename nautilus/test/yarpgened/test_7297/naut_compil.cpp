/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7297
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7297
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_4, val<bool> var_7, val<signed char> var_16, val<bool> var_17, val<int> zero, val<unsigned short*> var_19, val<bool*> var_20) {
    *var_19 &= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_4))))) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_4))));
    *var_20 = ((/* implicit */val<bool>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10772475220855457119ULL;
unsigned short var_4 = (unsigned short)54737;
bool var_7 = (bool)0;
signed char var_16 = (signed char)77;
bool var_17 = (bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)33343;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)32785;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_16, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
