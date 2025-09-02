/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8489
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8489
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
void test(val<unsigned char> var_1, val<unsigned char> var_3, val<bool> var_6, val<unsigned long long int> var_8, val<unsigned int> var_9, val<long long int> var_14, val<signed char> var_15, val<short> var_16, val<unsigned int> var_18, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<signed char*> var_21) {
    *var_19 = ((/* implicit */val<bool>) (~(((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_15))) : (var_9))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) 0ULL))))))))));
    *var_20 *= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-56))) != (10378277426395367767ULL)))), (var_3)));
    *var_21 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_16)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) var_18)) : (var_8))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) != (var_18))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
unsigned char var_3 = (unsigned char)34;
bool var_6 = (bool)1;
unsigned long long int var_8 = 6803430848488640674ULL;
unsigned int var_9 = 1335835267U;
long long int var_14 = 3064527972226989692LL;
signed char var_15 = (signed char)61;
short var_16 = (short)-2198;
unsigned int var_18 = 1494598951U;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)6772;
signed char var_21 = (signed char)54;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)33640;
    value_mismatch |= var_21 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, var_9, var_14, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
