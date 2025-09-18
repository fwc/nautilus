/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3643
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3643
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
void test(val<short> var_0, val<bool> var_1, val<unsigned int> var_2, val<short> var_5, val<int> zero, val<signed char*> var_18, val<int*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21) {
    *var_18 = ((/* implicit */val<signed char>) var_5);
    *var_19 = ((/* implicit */val<int>) max((*var_19), (((((/* implicit */val<int>) ((((/* implicit */val<int>) max((((/* implicit */val<short>) var_1)), (var_5)))) < (((/* implicit */val<int>) min(((val<short>)-21442), ((val<short>)23962))))))) / (((/* implicit */val<int>) var_1))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_0);
    *var_21 = ((/* implicit */val<unsigned long long int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30832;
bool var_1 = (bool)1;
unsigned int var_2 = 3274310629U;
short var_5 = (short)-16655;
int zero = 0;
signed char var_18 = (signed char)-123;
int var_19 = 144099548;
unsigned short var_20 = (unsigned short)15490;
unsigned long long int var_21 = 12784812083833198361ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-15;
    value_mismatch |= var_19 != 144099548;
    value_mismatch |= var_20 != (unsigned short)34704;
    value_mismatch |= var_21 != 3274310629ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_5, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
