/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3934
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3934
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<int> var_4, val<int> var_6, val<long long int> var_7, val<unsigned long long int> var_8, val<short> var_9, val<unsigned int> var_10, val<unsigned char> var_12, val<unsigned char> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) var_4)) ? (var_6) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_12)) : (var_4)))))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<long long int>) 10U))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_1)), (var_4)))) : (((var_0) & (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))))) ? (max((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_13))))), (((((/* implicit */val<bool>) var_10)) ? (11LL) : (var_7))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) < (min((-22LL), (((/* implicit */val<long long int>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12303447811951095289ULL;
bool var_1 = (bool)0;
int var_4 = -39067352;
int var_6 = 1118334888;
long long int var_7 = -5206679418249286932LL;
unsigned long long int var_8 = 2855405319572163708ULL;
short var_9 = (short)3853;
unsigned int var_10 = 3049887479U;
unsigned char var_12 = (unsigned char)50;
unsigned char var_13 = (unsigned char)241;
int zero = 0;
unsigned char var_14 = (unsigned char)241;
unsigned char var_15 = (unsigned char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)88;
    value_mismatch |= var_15 != (unsigned char)241;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_7, var_8, var_9, var_10, var_12, var_13, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
