/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2677
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2677
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
void test(val<unsigned int> var_1, val<unsigned int> var_2, val<signed char> var_6, val<bool> var_10, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) > (((((((/* implicit */val<bool>) 2760281077U)) ? (var_1) : (var_2))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))))))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_10);
    *var_17 += ((/* implicit */val<unsigned char>) ((val<unsigned int>) (val<unsigned short>)23823));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1750936950U;
unsigned int var_2 = 454373115U;
signed char var_6 = (signed char)66;
bool var_10 = (bool)1;
int zero = 0;
unsigned long long int var_15 = 9108916365302009771ULL;
unsigned short var_16 = (unsigned short)23581;
unsigned char var_17 = (unsigned char)175;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 9108916365302009771ULL;
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != (unsigned char)190;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
}
