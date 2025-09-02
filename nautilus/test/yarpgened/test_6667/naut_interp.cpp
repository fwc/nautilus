/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6667
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6667
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
void test(val<bool> var_0, val<unsigned int> var_1, val<signed char> var_2, val<int> var_8, val<bool> var_11, val<int> zero, val<unsigned int*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned int>) ((max((((val<unsigned long long int>) (val<bool>)1)), (((/* implicit */val<unsigned long long int>) var_0)))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned short>)65535)) ? (var_8) : (((/* implicit */val<int>) var_11))))) != (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)48261))) * (var_1)))))))));
    *var_13 ^= ((/* implicit */val<bool>) max((((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_8)))))), ((((val<bool>)0) ? (((((/* implicit */val<int>) var_11)) << (((((/* implicit */val<int>) (val<unsigned char>)32)) - (32))))) : (((/* implicit */val<int>) (!(var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_1 = 2822084108U;
signed char var_2 = (signed char)-66;
int var_8 = 1069423958;
bool var_11 = (bool)0;
int zero = 0;
unsigned int var_12 = 3976445229U;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1U;
    value_mismatch |= var_13 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
