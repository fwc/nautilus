/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5522
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5522
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
void test(val<unsigned short> var_0, val<signed char> var_4, val<unsigned long long int> var_5, val<unsigned int> var_6, val<short> var_8, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11) {
    *var_10 = ((/* implicit */val<unsigned short>) max((max((((/* implicit */val<int>) var_0)), ((+(((/* implicit */val<int>) var_4)))))), (max(((-(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) var_0))))));
    *var_11 = ((/* implicit */val<signed char>) min((*var_11), (((/* implicit */val<signed char>) ((((/* implicit */val<bool>) max((var_5), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) <= (var_6))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))) : (max((((/* implicit */val<unsigned int>) var_8)), (((val<unsigned int>) var_5)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42936;
signed char var_4 = (signed char)103;
unsigned long long int var_5 = 10053057439423037047ULL;
unsigned int var_6 = 2478197373U;
short var_8 = (short)4199;
int zero = 0;
unsigned short var_10 = (unsigned short)12546;
signed char var_11 = (signed char)-36;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)42936;
    value_mismatch |= var_11 != (signed char)-36;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_6, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
