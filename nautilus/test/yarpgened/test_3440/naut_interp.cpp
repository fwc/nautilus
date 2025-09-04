/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3440
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3440
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
void test(val<unsigned int> var_2, val<unsigned char> var_4, val<unsigned short> var_10, val<short> var_12, val<signed char> var_14, val<bool> var_16, val<int> zero, val<bool*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) var_10);
    *var_19 += ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_2)) ? (max((((/* implicit */val<unsigned int>) var_12)), (var_2))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((((/* implicit */val<signed char>) var_16)), (var_14))))))) ^ (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2919430434U;
unsigned char var_4 = (unsigned char)150;
unsigned short var_10 = (unsigned short)9482;
short var_12 = (short)-21128;
signed char var_14 = (signed char)73;
bool var_16 = (bool)0;
int zero = 0;
bool var_18 = (bool)1;
long long int var_19 = 1636702819652146692LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 1636702823947092978LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_10, var_12, var_14, var_16, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
