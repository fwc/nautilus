/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 56
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=56
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
void test(val<unsigned short> var_0, val<signed char> var_3, val<int> var_4, val<signed char> var_5, val<bool> var_9, val<long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) (-(var_12)));
    *var_14 = ((/* implicit */val<bool>) ((val<long long int>) (!(((/* implicit */val<bool>) var_4)))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_9)), (var_4)))) ? (((/* implicit */val<int>) var_0)) : (((((/* implicit */val<bool>) (val<signed char>)48)) ? (((((/* implicit */val<int>) (val<bool>)1)) - (((/* implicit */val<int>) (val<bool>)1)))) : (((((/* implicit */val<bool>) 6792561499863663360LL)) ? (((/* implicit */val<int>) (val<unsigned short>)55267)) : (111601170))))))))
    {
        *var_15 = ((/* implicit */val<unsigned long long int>) min((var_4), (((/* implicit */val<int>) var_3))));
        *var_16 = ((/* implicit */val<unsigned char>) var_5);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50942;
signed char var_3 = (signed char)-119;
int var_4 = 1442668136;
signed char var_5 = (signed char)-22;
bool var_9 = (bool)0;
long long int var_12 = -1667069789679724649LL;
int zero = 0;
unsigned short var_13 = (unsigned short)56686;
bool var_14 = (bool)0;
unsigned long long int var_15 = 13437685523983421835ULL;
unsigned char var_16 = (unsigned char)103;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)10345;
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != 13437685523983421835ULL;
    value_mismatch |= var_16 != (unsigned char)103;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_9, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
