/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7969
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7969
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
void test(val<bool> var_1, val<unsigned int> var_6, val<bool> var_12, val<unsigned int> var_13, val<unsigned long long int> var_15, val<int> zero, val<int*> var_19, val<unsigned long long int*> var_20, val<long long int*> var_21, val<int*> var_22) {
    *var_19 = ((/* implicit */val<int>) var_13);
    *var_20 *= ((val<unsigned long long int>) ((((val<long long int>) var_15)) - (((/* implicit */val<long long int>) var_13))));
    *var_21 = ((/* implicit */val<long long int>) ((((val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65535))) * (var_13)))) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) ((var_1) && (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_6)) | (var_15)))))))));
    *var_22 = ((/* implicit */val<int>) (val<unsigned short>)21);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned int var_6 = 1607721816U;
bool var_12 = (bool)0;
unsigned int var_13 = 214722991U;
unsigned long long int var_15 = 1562649727191645347ULL;
int zero = 0;
int var_19 = 1463799140;
unsigned long long int var_20 = 13778868553810808973ULL;
long long int var_21 = 1690713156245966147LL;
int var_22 = -928344538;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 214722991;
    value_mismatch |= var_20 != 10798548062127108196ULL;
    value_mismatch |= var_21 != 0LL;
    value_mismatch |= var_22 != 21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_12, var_13, var_15, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
