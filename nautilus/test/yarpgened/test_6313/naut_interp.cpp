/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6313
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6313
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
void test(val<short> var_0, val<signed char> var_2, val<long long int> var_5, val<long long int> var_7, val<int> zero, val<unsigned short*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) ((val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) < ((-(var_7))))));
    *var_12 += ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)136)) ? (min((((/* implicit */val<long long int>) var_2)), (var_5))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)111)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8867;
signed char var_2 = (signed char)5;
long long int var_5 = -8953965324996677186LL;
long long int var_7 = 8688974565357043160LL;
int zero = 0;
unsigned short var_11 = (unsigned short)37652;
unsigned long long int var_12 = 2581288915064305864ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)0;
    value_mismatch |= var_12 != 12074067663777180294ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
