/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4351
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4351
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
void test(val<long long int> var_2, val<long long int> var_5, val<unsigned char> var_8, val<unsigned short> var_9, val<int> zero, val<long long int*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) min((((/* implicit */val<int>) ((val<bool>) var_8))), (max((((((/* implicit */val<int>) (val<signed char>)125)) % (1190295041))), (((/* implicit */val<int>) ((val<short>) var_5)))))));
    *var_15 &= ((/* implicit */val<unsigned char>) ((((((var_2) + (9223372036854775807LL))) >> ((((-(((/* implicit */val<int>) var_9)))) + (27199))))) <= (((/* implicit */val<long long int>) ((val<int>) ((((/* implicit */val<int>) (val<bool>)1)) == (((/* implicit */val<int>) (val<signed char>)-126))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9147790158724050002LL;
long long int var_5 = -2971212193207881063LL;
unsigned char var_8 = (unsigned char)222;
unsigned short var_9 = (unsigned short)27199;
int zero = 0;
long long int var_14 = -758698179683005733LL;
unsigned char var_15 = (unsigned char)183;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 1LL;
    value_mismatch |= var_15 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_9, zero, &var_14, &var_15);
  checksum();
}
