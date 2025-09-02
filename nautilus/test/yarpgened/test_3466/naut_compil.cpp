/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3466
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3466
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
void test(val<long long int> var_0, val<long long int> var_1, val<short> var_3, val<unsigned char> var_4, val<unsigned long long int> var_7, val<unsigned int> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11, val<bool*> var_12, val<long long int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((((/* implicit */val<int>) (val<short>)-32749)) == (((/* implicit */val<int>) (val<signed char>)23)))))))));
    if (((/* implicit */val<bool>) var_9))
    {
        *var_11 = ((val<unsigned long long int>) ((val<bool>) ((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) var_0)) : (var_7))));
        *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) - (var_1)));
        *var_13 = (~(var_0));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5025226416938653374LL;
long long int var_1 = 3232870825521416954LL;
short var_3 = (short)-10283;
unsigned char var_4 = (unsigned char)146;
unsigned long long int var_7 = 13308513525231459576ULL;
unsigned int var_9 = 2968591921U;
int zero = 0;
unsigned short var_10 = (unsigned short)43197;
unsigned long long int var_11 = 4341019238734350981ULL;
bool var_12 = (bool)1;
long long int var_13 = -1617495545473397631LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)65535;
    value_mismatch |= var_11 != 1ULL;
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 5025226416938653373LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
