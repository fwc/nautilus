/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4221
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4221
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_3, val<int> var_5, val<int> var_11, val<bool> var_13, val<int> zero, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<bool*> var_16, val<short*> var_17) {
    if (((/* implicit */val<bool>) max((((val<signed char>) max((((/* implicit */val<long long int>) (val<bool>)1)), (9223372036854775807LL)))), (((/* implicit */val<signed char>) var_13)))))
    {
        *var_14 = ((/* implicit */val<unsigned long long int>) var_5);
        *var_15 = ((/* implicit */val<unsigned long long int>) var_11);
        *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((val<long long int>) (-2147483647 - 1)))))) ? ((+(var_3))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)8853)))));
    }

    *var_17 = ((/* implicit */val<short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned long long int var_3 = 11867085997631877125ULL;
int var_5 = -388225133;
int var_11 = -922492752;
bool var_13 = (bool)0;
int zero = 0;
unsigned long long int var_14 = 17716270382496136612ULL;
unsigned long long int var_15 = 3405892361934388735ULL;
bool var_16 = (bool)0;
short var_17 = (short)4319;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 17716270382496136612ULL;
    value_mismatch |= var_15 != 3405892361934388735ULL;
    value_mismatch |= var_16 != (bool)0;
    value_mismatch |= var_17 != (short)29;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
