/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9007
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9007
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
void test(val<long long int> var_2, val<unsigned int> var_3, val<unsigned char> var_10, val<int> var_12, val<bool> var_13, val<int> zero, val<signed char*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<signed char>) ((var_13) ? ((+(((/* implicit */val<int>) (val<bool>)1)))) : (max((((/* implicit */val<int>) var_10)), ((+(var_12)))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<signed char>)-115)) ? (((/* implicit */val<int>) (val<signed char>)-59)) : (((/* implicit */val<int>) (val<unsigned short>)65535))))) * (var_3)))), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7062917027964489331LL;
unsigned int var_3 = 2386870534U;
unsigned char var_10 = (unsigned char)240;
int var_12 = 147347645;
bool var_13 = (bool)1;
int zero = 0;
signed char var_15 = (signed char)90;
unsigned long long int var_16 = 11561396301781901578ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)1;
    value_mismatch |= var_16 != 7062917027964489331ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_10, var_12, var_13, zero, &var_15, &var_16);
  checksum();
}
