/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3802
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3802
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
void test(val<unsigned short> var_1, val<bool> var_5, val<long long int> var_10, val<long long int> var_11, val<signed char> var_12, val<unsigned int> var_13, val<long long int> var_15, val<int> zero, val<unsigned long long int*> var_16, val<bool*> var_17, val<unsigned int*> var_18, val<short*> var_19) {
    if (((/* implicit */val<bool>) var_12))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) ((((var_15) / (min((var_15), (((/* implicit */val<long long int>) var_5)))))) < (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) / (var_15)))) ? (var_11) : (((/* implicit */val<long long int>) min((var_13), (((/* implicit */val<unsigned int>) var_1)))))))));
        *var_17 = ((/* implicit */val<bool>) var_10);
        *var_18 ^= ((/* implicit */val<unsigned int>) var_10);
    }

    *var_19 = ((/* implicit */val<short>) 4147343580238750454LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2179;
bool var_5 = (bool)0;
long long int var_10 = -5194471025705959275LL;
long long int var_11 = -4356913754683689349LL;
signed char var_12 = (signed char)-59;
unsigned int var_13 = 3729877171U;
long long int var_15 = -4805996693768892083LL;
int zero = 0;
unsigned long long int var_16 = 3832865638312423999ULL;
bool var_17 = (bool)0;
unsigned int var_18 = 3847382599U;
short var_19 = (short)-11400;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 1106159314U;
    value_mismatch |= var_19 != (short)-23818;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_10, var_11, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
