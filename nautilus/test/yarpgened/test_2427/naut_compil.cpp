/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2427
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2427
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
void test(val<int> var_0, val<int> var_4, val<long long int> var_5, val<short> var_7, val<unsigned short> var_8, val<bool> var_9, val<signed char> var_13, val<unsigned int> var_15, val<unsigned long long int> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20, val<unsigned long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_8))));
    *var_20 = ((/* implicit */val<unsigned short>) max((((val<unsigned long long int>) (~(17604438056961911767ULL)))), (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_8)))))));
    *var_21 = ((/* implicit */val<unsigned long long int>) min((max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) / (var_5))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_9))))))), (((((/* implicit */val<bool>) var_18)) ? (((val<long long int>) 17604438056961911768ULL)) : (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) var_4)) / (var_15))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -325987485;
int var_4 = -1621118441;
long long int var_5 = -7725327677263287828LL;
short var_7 = (short)-9395;
unsigned short var_8 = (unsigned short)65106;
bool var_9 = (bool)0;
signed char var_13 = (signed char)-100;
unsigned int var_15 = 1318648263U;
unsigned long long int var_18 = 14477051166538065960ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)12514;
unsigned short var_20 = (unsigned short)61842;
unsigned long long int var_21 = 14858400209961650088ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (unsigned short)430;
    value_mismatch |= var_21 != 17604438056961911768ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_8, var_9, var_13, var_15, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
