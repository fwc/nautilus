/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5524
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5524
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<int> var_2, val<unsigned long long int> var_4, val<short> var_6, val<int> var_8, val<unsigned char> var_13, val<int> var_14, val<int> zero, val<unsigned short*> var_15, val<int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned short>) var_1);
    *var_16 += ((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) max((((((/* implicit */val<int>) (val<unsigned short>)38598)) >> (((((/* implicit */val<int>) var_6)) - (20428))))), ((~(var_14)))))) ^ (((var_0) ^ (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_13)) >> (((var_0) - (3923496845U))))))))));
    *var_17 += ((/* implicit */val<short>) ((val<signed char>) ((((/* implicit */val<unsigned long long int>) max((var_2), (var_8)))) ^ (max((var_4), (((/* implicit */val<unsigned long long int>) (-2147483647 - 1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3923496870U;
unsigned char var_1 = (unsigned char)71;
int var_2 = -320480881;
unsigned long long int var_4 = 3453109638150695823ULL;
short var_6 = (short)20444;
int var_8 = 1409178413;
unsigned char var_13 = (unsigned char)148;
int var_14 = 410024030;
int zero = 0;
unsigned short var_15 = (unsigned short)49182;
int var_16 = 1645282622;
short var_17 = (short)23505;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)71;
    value_mismatch |= var_16 != 1273812196;
    value_mismatch |= var_17 != (short)23550;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
