/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9811
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9811
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
void test(val<signed char> var_3, val<int> var_4, val<unsigned short> var_5, val<unsigned long long int> var_7, val<unsigned int> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((var_5), (((/* implicit */val<unsigned short>) var_3)))))) | (var_7)))) ? (((/* implicit */val<long long int>) var_9)) : (min((max((9223372036854775807LL), (((/* implicit */val<long long int>) (val<unsigned short>)47623)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)0)) >> (((var_4) - (1742001525))))))))));
    *var_11 = (!(((/* implicit */val<bool>) (val<unsigned short>)65531)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-40;
int var_4 = 1742001530;
unsigned short var_5 = (unsigned short)45090;
unsigned long long int var_7 = 8434338718692756428ULL;
unsigned int var_9 = 898261431U;
int zero = 0;
int var_10 = 2049760910;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 898261431;
    value_mismatch |= var_11 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_7, var_9, zero, &var_10, &var_11);
  checksum();
}
