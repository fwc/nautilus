/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1908
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1908
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
void test(val<unsigned int> var_1, val<unsigned long long int> var_5, val<unsigned short> var_8, val<long long int> var_9, val<int> zero, val<unsigned short*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) min((max((((/* implicit */val<unsigned long long int>) var_9)), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) - (var_5))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<signed char>)8)), (var_8)))), ((+(((/* implicit */val<int>) (val<signed char>)-3)))))))));
    *var_12 -= ((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned long long int>) var_1)), (var_5))) - (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((2784390299U) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 830188243U;
unsigned long long int var_5 = 14833463916681676771ULL;
unsigned short var_8 = (unsigned short)28121;
long long int var_9 = 3306840040895341055LL;
int zero = 0;
unsigned short var_11 = (unsigned short)46571;
signed char var_12 = (signed char)-49;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)8;
    value_mismatch |= var_12 != (signed char)-3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, var_9, zero, &var_11, &var_12);
  checksum();
}
