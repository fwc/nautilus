/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4210
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4210
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
void test(val<signed char> var_1, val<long long int> var_4, val<signed char> var_7, val<unsigned char> var_8, val<short> var_10, val<int> zero, val<unsigned char*> var_16, val<long long int*> var_17, val<bool*> var_18) {
    *var_16 += ((/* implicit */val<unsigned char>) var_4);
    *var_17 += ((/* implicit */val<long long int>) ((val<unsigned int>) var_10));
    *var_18 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) 2147483648U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) : (((val<unsigned int>) var_8)))) / (((1073741824U) * (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
long long int var_4 = -3127313280777874579LL;
signed char var_7 = (signed char)74;
unsigned char var_8 = (unsigned char)140;
short var_10 = (short)-28308;
int zero = 0;
unsigned char var_16 = (unsigned char)176;
long long int var_17 = -6621226040229722385LL;
bool var_18 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)29;
    value_mismatch |= var_17 != -6621226035934783397LL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_7, var_8, var_10, zero, &var_16, &var_17, &var_18);
  checksum();
}
