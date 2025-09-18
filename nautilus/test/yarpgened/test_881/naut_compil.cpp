/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 881
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=881
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
void test(val<bool> var_0, val<bool> var_2, val<signed char> var_4, val<unsigned char> var_7, val<signed char> var_9, val<unsigned short> var_10, val<int> zero, val<unsigned int*> var_17, val<bool*> var_18, val<unsigned char*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) var_2);
    *var_18 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_9))));
    *var_19 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) ((val<signed char>) max((((/* implicit */val<unsigned char>) var_0)), (var_7))))), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_10))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_2 = (bool)0;
signed char var_4 = (signed char)111;
unsigned char var_7 = (unsigned char)215;
signed char var_9 = (signed char)65;
unsigned short var_10 = (unsigned short)19170;
int zero = 0;
unsigned int var_17 = 1419647293U;
bool var_18 = (bool)1;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (unsigned char)215;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_9, var_10, zero, &var_17, &var_18, &var_19);
  checksum();
}
