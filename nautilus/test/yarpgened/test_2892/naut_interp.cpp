/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2892
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2892
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned short> var_3, val<signed char> var_5, val<unsigned int> var_7, val<unsigned long long int> var_9, val<int> zero, val<unsigned char*> var_13, val<long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) ((((val<long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)125))) ^ (17583596109824LL)))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<int>) var_3)) << (((var_0) - (798069601U))))))))));
    *var_14 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<unsigned short>) ((val<bool>) var_9)))) + (((/* implicit */val<int>) ((((var_7) - (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))))) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 798069614U;
bool var_1 = (bool)1;
unsigned short var_3 = (unsigned short)60625;
signed char var_5 = (signed char)115;
unsigned int var_7 = 3239126886U;
unsigned long long int var_9 = 14637566412241327235ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)238;
long long int var_14 = -5717078222768465365LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != 2LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_7, var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
