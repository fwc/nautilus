/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3721
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3721
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
void test(val<long long int> var_1, val<int> var_9, val<unsigned int> var_16, val<int> zero, val<unsigned short*> var_20, val<int*> var_21, val<unsigned int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned short>) min((min((((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)232))), (max((((/* implicit */val<int>) (val<unsigned short>)11880)), (524288))))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) ((val<signed char>) (val<signed char>)-36))) || (((/* implicit */val<bool>) min((4290772992U), (((/* implicit */val<unsigned int>) (val<signed char>)119))))))))));
    *var_21 -= ((/* implicit */val<int>) (!(((val<bool>) 1017882114U))));
    *var_22 = ((/* implicit */val<unsigned int>) min((*var_22), (((/* implicit */val<unsigned int>) ((val<int>) ((((/* implicit */val<bool>) (+(var_1)))) ? (var_9) : (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) (val<signed char>)-26)) : (((/* implicit */val<int>) (val<signed char>)11))))))))));
    *var_23 &= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((4290772978U), (((/* implicit */val<unsigned int>) 7936))))) ? (((/* implicit */val<int>) (val<unsigned short>)53664)) : (((((/* implicit */val<bool>) -5462430704112566050LL)) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)53640)) && (((/* implicit */val<bool>) 798598755))))) : (((/* implicit */val<int>) (val<unsigned short>)38920))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4809966549982865667LL;
int var_9 = -236627416;
unsigned int var_16 = 795313356U;
int zero = 0;
unsigned short var_20 = (unsigned short)42980;
int var_21 = -1847737306;
unsigned int var_22 = 511728963U;
unsigned int var_23 = 3457057904U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != -1847737306;
    value_mismatch |= var_22 != 511728963U;
    value_mismatch |= var_23 != 32800U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_16, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
