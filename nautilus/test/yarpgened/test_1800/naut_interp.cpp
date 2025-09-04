/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1800
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1800
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
void test(val<unsigned short> var_1, val<unsigned int> var_8, val<bool> var_10, val<short> var_11, val<int> zero, val<bool*> var_18, val<long long int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<bool>) max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))), (134217600)));
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) ((((((/* implicit */val<int>) ((val<signed char>) var_11))) + ((-(((/* implicit */val<int>) var_10)))))) / (((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_10)), ((val<unsigned short>)4032)))) + (((-1501063504) + (((/* implicit */val<int>) (val<unsigned short>)59445)))))))))));
    *var_20 = ((/* implicit */val<bool>) ((var_8) - (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) (val<unsigned short>)59468)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50225;
unsigned int var_8 = 2136929330U;
bool var_10 = (bool)0;
short var_11 = (short)-10;
int zero = 0;
bool var_18 = (bool)1;
long long int var_19 = 3156699782859565024LL;
bool var_20 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 0LL;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_10, var_11, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
