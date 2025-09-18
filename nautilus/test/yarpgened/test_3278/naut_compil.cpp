/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3278
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3278
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
void test(val<int> var_2, val<signed char> var_3, val<signed char> var_8, val<unsigned short> var_9, val<bool> var_11, val<int> var_13, val<int> zero, val<bool*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_11)) + (var_2))) >> (((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_3)))) >> (((var_13) + (20627058)))))));
    *var_15 = ((/* implicit */val<unsigned short>) min((*var_15), (((/* implicit */val<unsigned short>) var_13))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 231669705;
signed char var_3 = (signed char)-26;
signed char var_8 = (signed char)13;
unsigned short var_9 = (unsigned short)6086;
bool var_11 = (bool)1;
int var_13 = -20627032;
int zero = 0;
bool var_14 = (bool)0;
unsigned short var_15 = (unsigned short)52058;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (unsigned short)16808;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_9, var_11, var_13, zero, &var_14, &var_15);
  checksum();
}
