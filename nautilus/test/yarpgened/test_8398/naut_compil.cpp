/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8398
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_2, val<int> var_4, val<unsigned long long int> var_7, val<long long int> var_8, val<unsigned char> var_13, val<unsigned char> var_17, val<int> zero, val<long long int*> var_18, val<bool*> var_19) {
    *var_18 -= ((/* implicit */val<long long int>) ((((max((((/* implicit */val<unsigned long long int>) var_8)), (var_7))) - (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) var_4)) : (var_2))))) | (((/* implicit */val<unsigned long long int>) max((var_4), ((~(((/* implicit */val<int>) var_17)))))))));
    *var_19 = ((/* implicit */val<bool>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2153971580U;
unsigned long long int var_2 = 10774936250192907960ULL;
int var_4 = 109819835;
unsigned long long int var_7 = 14601966683449556448ULL;
long long int var_8 = -2227688350339300507LL;
unsigned char var_13 = (unsigned char)152;
unsigned char var_17 = (unsigned char)66;
int zero = 0;
long long int var_18 = -4032223675026820328LL;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1804535324687518883LL;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_7, var_8, var_13, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
