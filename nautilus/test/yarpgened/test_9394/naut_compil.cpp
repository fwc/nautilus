/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9394
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9394
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
void test(val<bool> var_1, val<unsigned char> var_2, val<bool> var_6, val<short> var_10, val<unsigned short> var_11, val<unsigned int> var_12, val<int> zero, val<signed char*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<signed char>) ((var_1) ? (((((/* implicit */val<bool>) min((4294967295U), (((/* implicit */val<unsigned int>) (val<bool>)1))))) ? (min((((/* implicit */val<unsigned int>) (val<short>)-30880)), (var_12))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) var_10)))))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_2)) <= (((/* implicit */val<int>) var_11))))), (var_11)))))));
    *var_15 = ((/* implicit */val<unsigned char>) min(((val<short>)30892), ((val<short>)-30854)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned char var_2 = (unsigned char)93;
bool var_6 = (bool)0;
short var_10 = (short)-15796;
unsigned short var_11 = (unsigned short)16096;
unsigned int var_12 = 639584803U;
int zero = 0;
signed char var_14 = (signed char)-119;
unsigned char var_15 = (unsigned char)230;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)35;
    value_mismatch |= var_15 != (unsigned char)122;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_10, var_11, var_12, zero, &var_14, &var_15);
  checksum();
}
