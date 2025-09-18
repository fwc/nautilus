/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4208
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4208
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
void test(val<bool> var_1, val<unsigned char> var_2, val<unsigned int> var_4, val<int> var_5, val<bool> var_6, val<bool> var_8, val<bool> var_10, val<int> zero, val<short*> var_11, val<long long int*> var_12) {
    *var_11 &= ((/* implicit */val<short>) ((((/* implicit */val<bool>) max((((var_5) - (((/* implicit */val<int>) var_6)))), (((/* implicit */val<int>) max((var_6), (var_8))))))) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) (val<bool>)0)), (((((/* implicit */val<int>) var_10)) ^ (var_5)))))) : (((((/* implicit */val<unsigned long long int>) max((var_4), (((/* implicit */val<unsigned int>) var_1))))) | (((((/* implicit */val<bool>) var_4)) ? (10708319105415723575ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))));
    *var_12 = ((/* implicit */val<long long int>) ((var_4) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned char var_2 = (unsigned char)182;
unsigned int var_4 = 1995172101U;
int var_5 = -1892772542;
bool var_6 = (bool)0;
bool var_8 = (bool)1;
bool var_10 = (bool)0;
int zero = 0;
short var_11 = (short)14693;
long long int var_12 = -294981447954051409LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)0;
    value_mismatch |= var_12 != 13LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_6, var_8, var_10, zero, &var_11, &var_12);
  checksum();
}
