/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1251
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1251
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
void test(val<bool> var_0, val<signed char> var_2, val<bool> var_3, val<bool> var_4, val<signed char> var_8, val<int> zero, val<unsigned long long int*> var_11, val<bool*> var_12, val<unsigned short*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) max(((~(((var_0) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)102)))))), ((~((~(((/* implicit */val<int>) var_8))))))));
    *var_12 = var_4;
    *var_13 ^= ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
signed char var_2 = (signed char)36;
bool var_3 = (bool)0;
bool var_4 = (bool)0;
signed char var_8 = (signed char)-98;
int zero = 0;
unsigned long long int var_11 = 17265098529986243347ULL;
bool var_12 = (bool)1;
unsigned short var_13 = (unsigned short)5275;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 18446744073709551615ULL;
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != (unsigned short)5311;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
}
