/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1539
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1539
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<int> var_6, val<long long int> var_7, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_12, val<int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (min((((val<unsigned short>) max((((/* implicit */val<long long int>) 670854390U)), (var_7)))), (((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) (val<unsigned short>)46278))))))))));
    *var_13 &= ((/* implicit */val<int>) min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) ((val<unsigned short>) var_6)))))), (((val<unsigned int>) (+(((/* implicit */val<int>) var_11)))))));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<signed char>)63)) ? (((/* implicit */val<int>) (val<unsigned short>)39670)) : (((/* implicit */val<int>) (val<short>)-16147))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 866324651;
long long int var_7 = -8433047236084021717LL;
unsigned short var_11 = (unsigned short)12378;
int zero = 0;
unsigned short var_12 = (unsigned short)55849;
int var_13 = -660110042;
short var_14 = (short)-26737;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != 34;
    value_mismatch |= var_14 != (short)-25866;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
