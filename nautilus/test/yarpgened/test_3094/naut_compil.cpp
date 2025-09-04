/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3094
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3094
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
void test(val<short> var_0, val<unsigned long long int> var_4, val<unsigned long long int> var_7, val<unsigned short> var_8, val<unsigned char> var_10, val<unsigned int> var_11, val<int> var_13, val<int> zero, val<bool*> var_14, val<bool*> var_15, val<unsigned long long int*> var_16, val<signed char*> var_17) {
    *var_14 = ((/* implicit */val<bool>) var_4);
    *var_15 = ((/* implicit */val<bool>) var_10);
    if (((/* implicit */val<bool>) var_11))
    {
        *var_16 = ((/* implicit */val<unsigned long long int>) ((max(((!(((/* implicit */val<bool>) 809760569796831455ULL)))), ((!(((/* implicit */val<bool>) var_13)))))) ? (((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) min((var_8), (((/* implicit */val<unsigned short>) var_0))))), ((~(((/* implicit */val<int>) var_0))))))) : (((val<unsigned int>) ((2031927159U) ^ (2263040137U))))));
        *var_17 |= ((/* implicit */val<signed char>) var_7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)917;
unsigned long long int var_4 = 1368149938749333197ULL;
unsigned long long int var_7 = 9706185689092393251ULL;
unsigned short var_8 = (unsigned short)62906;
unsigned char var_10 = (unsigned char)72;
unsigned int var_11 = 4293665532U;
int var_13 = -2102381217;
int zero = 0;
bool var_14 = (bool)0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 14318697964800161310ULL;
signed char var_17 = (signed char)23;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 4294967294ULL;
    value_mismatch |= var_17 != (signed char)55;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_7, var_8, var_10, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
