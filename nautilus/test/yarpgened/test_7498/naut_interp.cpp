/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7498
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7498
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
void test(val<int> var_0, val<short> var_1, val<bool> var_2, val<unsigned char> var_3, val<bool> var_4, val<signed char> var_5, val<unsigned char> var_7, val<short> var_8, val<bool> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_8)) == (((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), ((val<short>)8205))))));
    *var_12 = ((/* implicit */val<unsigned long long int>) min((*var_12), (((/* implicit */val<unsigned long long int>) ((var_0) < (((/* implicit */val<int>) var_4)))))));
    *var_13 = ((/* implicit */val<long long int>) (val<short>)-23246);
    *var_14 = ((/* implicit */val<unsigned char>) min((*var_14), (((/* implicit */val<unsigned char>) ((((((val<long long int>) var_7)) + (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)0))))))) | (((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_7)))), (((/* implicit */val<int>) var_1))))))))));
    *var_15 = ((/* implicit */val<unsigned char>) min((((((/* implicit */val<int>) var_7)) + (max((var_0), (((/* implicit */val<int>) var_10)))))), (((/* implicit */val<int>) var_7))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -339161472;
short var_1 = (short)15408;
bool var_2 = (bool)1;
unsigned char var_3 = (unsigned char)28;
bool var_4 = (bool)1;
signed char var_5 = (signed char)-81;
unsigned char var_7 = (unsigned char)61;
short var_8 = (short)-24624;
bool var_10 = (bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)29;
unsigned long long int var_12 = 4377898541168973618ULL;
long long int var_13 = -8092383512778275918LL;
unsigned char var_14 = (unsigned char)92;
unsigned char var_15 = (unsigned char)238;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != 1ULL;
    value_mismatch |= var_13 != -23246LL;
    value_mismatch |= var_14 != (unsigned char)61;
    value_mismatch |= var_15 != (unsigned char)61;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
