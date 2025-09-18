/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9722
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9722
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
void test(val<bool> var_1, val<bool> var_3, val<unsigned long long int> var_7, val<bool> var_8, val<bool> var_11, val<int> var_12, val<int> zero, val<unsigned short*> var_15, val<unsigned char*> var_16, val<bool*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) var_12))));
    *var_16 = ((/* implicit */val<unsigned char>) ((val<unsigned short>) var_8));
    *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) var_12))));
    *var_18 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((var_8) ? (var_7) : (var_7))), (((/* implicit */val<unsigned long long int>) var_3))))) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_3 = (bool)1;
unsigned long long int var_7 = 8074376417779608105ULL;
bool var_8 = (bool)1;
bool var_11 = (bool)1;
int var_12 = -775316788;
int zero = 0;
unsigned short var_15 = (unsigned short)21899;
unsigned char var_16 = (unsigned char)174;
bool var_17 = (bool)0;
unsigned int var_18 = 1321673344U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)21899;
    value_mismatch |= var_16 != (unsigned char)1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_7, var_8, var_11, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
