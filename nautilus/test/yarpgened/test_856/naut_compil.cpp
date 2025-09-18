/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=856
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<short> var_6, val<unsigned short> var_10, val<int> zero, val<unsigned long long int*> var_12, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<unsigned char*> var_15) {
    *var_12 *= ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (val<unsigned char>)73)) ^ (((/* implicit */val<int>) (val<unsigned char>)31)))) * ((~(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) && (((/* implicit */val<bool>) var_6)))))))));
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) min((var_1), (((/* implicit */val<unsigned long long int>) var_6)))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) ((val<short>) (val<unsigned short>)41694))), (var_10))))));
    *var_15 += ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (val<unsigned char>)47))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10683300385330127270ULL;
unsigned long long int var_3 = 14837014753379922596ULL;
short var_6 = (short)-18771;
unsigned short var_10 = (unsigned short)46423;
int zero = 0;
unsigned long long int var_12 = 16238151369165980727ULL;
unsigned char var_13 = (unsigned char)126;
unsigned long long int var_14 = 1805290733436526574ULL;
unsigned char var_15 = (unsigned char)91;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 10943063707303160588ULL;
    value_mismatch |= var_13 != (unsigned char)126;
    value_mismatch |= var_14 != 18446744073709505192ULL;
    value_mismatch |= var_15 != (unsigned char)91;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
