/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7906
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7906
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
void test(val<unsigned char> var_2, val<unsigned short> var_4, val<unsigned long long int> var_9, val<unsigned long long int> var_14, val<int> zero, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) -6770914973964313371LL)) : (min((((/* implicit */val<unsigned long long int>) var_4)), (var_9)))));
    *var_17 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<bool>)0)) - (-1601311598)))), ((-((-(4140624529U)))))));
    *var_18 = ((/* implicit */val<unsigned int>) var_14);
    *var_19 = ((/* implicit */val<bool>) max(((val<unsigned short>)51130), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) 18446744073709551615ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
unsigned short var_4 = (unsigned short)49545;
unsigned long long int var_9 = 14960150665453357031ULL;
unsigned long long int var_14 = 2325050317958631369ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)237;
unsigned long long int var_17 = 10897049160169873850ULL;
unsigned int var_18 = 2767914988U;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)229;
    value_mismatch |= var_17 != 1601311598ULL;
    value_mismatch |= var_18 != 248860617U;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_9, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
