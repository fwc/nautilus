/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1439
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1439
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
void test(val<unsigned short> var_5, val<bool> var_6, val<unsigned char> var_7, val<unsigned int> var_8, val<unsigned int> var_9, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_12 = ((/* implicit */val<unsigned short>) min((14183752270238326160ULL), (((/* implicit */val<unsigned long long int>) max((76356057U), (((/* implicit */val<unsigned int>) (val<unsigned char>)136)))))));
    *var_13 = ((/* implicit */val<bool>) 4680758344932095833LL);
    *var_14 = ((/* implicit */val<unsigned short>) max((min((((/* implicit */val<unsigned int>) var_5)), (var_8))), (min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_7)) * (((/* implicit */val<int>) (val<unsigned char>)5))))), (var_9)))));
    *var_15 = ((/* implicit */val<unsigned short>) var_6);
    *var_16 |= ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)43657;
bool var_6 = (bool)1;
unsigned char var_7 = (unsigned char)31;
unsigned int var_8 = 1699976077U;
unsigned int var_9 = 1100801376U;
int zero = 0;
unsigned short var_12 = (unsigned short)19968;
bool var_13 = (bool)1;
unsigned short var_14 = (unsigned short)50344;
unsigned short var_15 = (unsigned short)25294;
long long int var_16 = 1786782653819231364LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)6617;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (unsigned short)43657;
    value_mismatch |= var_15 != (unsigned short)1;
    value_mismatch |= var_16 != 1786782653819231365LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, var_8, var_9, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
