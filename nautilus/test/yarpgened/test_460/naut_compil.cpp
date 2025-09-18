/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 460
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=460
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
void test(val<unsigned long long int> var_1, val<signed char> var_4, val<unsigned int> var_5, val<unsigned long long int> var_6, val<short> var_9, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<bool>) var_5)) ? (max((((/* implicit */val<unsigned long long int>) 136812416)), (var_1))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)48)))))))), (((max((var_6), (var_6))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 4314062340894323833ULL))))))))));
    *var_11 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((var_1), (((/* implicit */val<unsigned long long int>) -136812417))))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_9))))), ((-(var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1513108685758168538ULL;
signed char var_4 = (signed char)-21;
unsigned int var_5 = 914016230U;
unsigned long long int var_6 = 8268118463748218781ULL;
short var_9 = (short)-5553;
int zero = 0;
unsigned short var_10 = (unsigned short)13646;
signed char var_11 = (signed char)81;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)32218;
    value_mismatch |= var_11 != (signed char)99;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_9, zero, &var_10, &var_11);
  checksum();
}
