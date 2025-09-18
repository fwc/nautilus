/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6161
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6161
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
void test(val<signed char> var_0, val<int> var_2, val<bool> var_3, val<long long int> var_4, val<unsigned int> var_10, val<unsigned long long int> var_12, val<unsigned char> var_14, val<int> zero, val<unsigned short*> var_16, val<bool*> var_17, val<signed char*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<unsigned short>) max((min((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_12))), (((/* implicit */val<unsigned long long int>) max(((val<unsigned short>)65535), (((/* implicit */val<unsigned short>) var_0))))))), (((/* implicit */val<unsigned long long int>) 3464527669587910386LL))));
    *var_17 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) 1783230933U)))) > (var_10));
    *var_18 = ((/* implicit */val<signed char>) ((min((((var_3) ? (((/* implicit */val<long long int>) var_10)) : (var_4))), (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) -1452018811)) : (3194937591138100052LL))))) >= (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)32934)))));
    *var_19 = ((/* implicit */val<unsigned long long int>) 2511736381U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
int var_2 = -1463452949;
bool var_3 = (bool)0;
long long int var_4 = 112267274207685776LL;
unsigned int var_10 = 2646845956U;
unsigned long long int var_12 = 10361961857263524211ULL;
unsigned char var_14 = (unsigned char)1;
int zero = 0;
unsigned short var_16 = (unsigned short)57371;
bool var_17 = (bool)1;
signed char var_18 = (signed char)6;
unsigned long long int var_19 = 16437264396830380050ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)40690;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != 2511736381ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_10, var_12, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
