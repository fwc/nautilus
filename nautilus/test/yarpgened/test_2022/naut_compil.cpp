/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2022
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2022
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
void test(val<bool> var_0, val<unsigned short> var_1, val<unsigned int> var_4, val<unsigned char> var_5, val<bool> var_9, val<unsigned short> var_11, val<unsigned long long int> var_12, val<int> zero, val<int*> var_14, val<int*> var_15, val<signed char*> var_16, val<long long int*> var_17) {
    *var_14 *= ((((((/* implicit */val<int>) max((var_11), (((/* implicit */val<unsigned short>) var_9))))) == (((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) == (((/* implicit */val<int>) (val<bool>)1))))))) ? (((((((/* implicit */val<int>) var_9)) != (((/* implicit */val<int>) var_1)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) ((val<bool>) var_1))))) : (((/* implicit */val<int>) var_0)));
    *var_15 = ((/* implicit */val<int>) ((val<short>) var_12));
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) var_5))));
    *var_17 = ((/* implicit */val<long long int>) (((+(2703356714U))) % (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned short var_1 = (unsigned short)39014;
unsigned int var_4 = 2260417841U;
unsigned char var_5 = (unsigned char)129;
bool var_9 = (bool)0;
unsigned short var_11 = (unsigned short)17955;
unsigned long long int var_12 = 5415333080507480938ULL;
int zero = 0;
int var_14 = -556638928;
int var_15 = 1128610116;
signed char var_16 = (signed char)74;
long long int var_17 = 8874001156608968458LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -556638928;
    value_mismatch |= var_15 != -1174;
    value_mismatch |= var_16 != (signed char)-127;
    value_mismatch |= var_17 != 442938873LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_9, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
}
