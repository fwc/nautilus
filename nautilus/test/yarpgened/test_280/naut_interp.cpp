/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 280
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=280
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
void test(val<signed char> var_1, val<unsigned int> var_2, val<unsigned short> var_5, val<unsigned long long int> var_6, val<unsigned int> var_7, val<unsigned int> var_10, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16) {
    *var_15 -= ((/* implicit */val<unsigned long long int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (((((/* implicit */val<bool>) var_2)) ? (var_6) : (((/* implicit */val<unsigned long long int>) var_12)))))));
    *var_16 += ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) (((!(((/* implicit */val<bool>) var_1)))) || (((/* implicit */val<bool>) var_10))))), (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned int var_2 = 324544302U;
unsigned short var_5 = (unsigned short)21476;
unsigned long long int var_6 = 8532197491202054089ULL;
unsigned int var_7 = 462092270U;
unsigned int var_10 = 77960737U;
long long int var_12 = -8490248227359797227LL;
int zero = 0;
unsigned long long int var_15 = 8400858962963402497ULL;
unsigned short var_16 = (unsigned short)63940;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 8400858962963381021ULL;
    value_mismatch |= var_16 != (unsigned short)63941;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_6, var_7, var_10, var_12, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
