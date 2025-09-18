/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7525
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7525
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
void test(val<unsigned char> var_1, val<unsigned int> var_2, val<unsigned int> var_3, val<unsigned long long int> var_4, val<unsigned char> var_7, val<unsigned long long int> var_8, val<int> zero, val<unsigned long long int*> var_12, val<int*> var_13, val<unsigned int*> var_14, val<unsigned long long int*> var_15) {
    *var_12 = ((val<unsigned long long int>) ((val<int>) var_2));
    *var_13 = ((/* implicit */val<int>) var_4);
    *var_14 = ((/* implicit */val<unsigned int>) max((*var_14), (var_3)));
    *var_15 += ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_1))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 9107564250406359719LL)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<unsigned char>)199))))) : (var_8));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)21;
unsigned int var_2 = 1597455124U;
unsigned int var_3 = 3346660289U;
unsigned long long int var_4 = 11741734967594489574ULL;
unsigned char var_7 = (unsigned char)16;
unsigned long long int var_8 = 8918238406892661503ULL;
int zero = 0;
unsigned long long int var_12 = 11507311094312740036ULL;
int var_13 = 1468991701;
unsigned int var_14 = 2014578617U;
unsigned long long int var_15 = 6802447861490952626ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1597455124ULL;
    value_mismatch |= var_13 != 507549414;
    value_mismatch |= var_14 != 3346660289U;
    value_mismatch |= var_15 != 6802447861490952642ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_7, var_8, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
