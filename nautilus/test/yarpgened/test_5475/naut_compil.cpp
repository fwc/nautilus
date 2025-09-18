/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5475
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5475
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
void test(val<unsigned int> var_4, val<unsigned short> var_7, val<int> var_9, val<long long int> var_10, val<unsigned short> var_14, val<bool> var_16, val<unsigned char> var_18, val<int> zero, val<signed char*> var_20, val<bool*> var_21) {
    *var_20 = ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) || (var_16)))) * (((/* implicit */val<int>) ((var_4) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18)))))))) > (((((/* implicit */val<int>) ((((/* implicit */val<bool>) -1660015449)) || (((/* implicit */val<bool>) var_4))))) % (((var_9) & (((/* implicit */val<int>) var_14))))))));
    *var_21 = ((/* implicit */val<bool>) ((((((((/* implicit */val<unsigned long long int>) -8910486265790994213LL)) ^ (2110474779246386381ULL))) | (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) 1660015462)) & (var_10)))))) ^ (((/* implicit */val<unsigned long long int>) ((((8910486265790994212LL) & (((/* implicit */val<long long int>) -1660015449)))) & (((-3380448840069740965LL) ^ (-8910486265790994213LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3965632046U;
unsigned short var_7 = (unsigned short)50264;
int var_9 = -695784387;
long long int var_10 = 1551147588202206925LL;
unsigned short var_14 = (unsigned short)41673;
bool var_16 = (bool)1;
unsigned char var_18 = (unsigned char)75;
int zero = 0;
signed char var_20 = (signed char)81;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (signed char)0;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_9, var_10, var_14, var_16, var_18, zero, &var_20, &var_21);
  checksum();
}
