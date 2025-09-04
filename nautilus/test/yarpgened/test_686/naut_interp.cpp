/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 686
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=686
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
void test(val<long long int> var_1, val<bool> var_5, val<bool> var_6, val<unsigned long long int> var_7, val<bool> var_9, val<int> zero, val<unsigned short*> var_10, val<short*> var_11, val<short*> var_12) {
    *var_10 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<unsigned short>)56880))))) ? ((-(((/* implicit */val<int>) (val<unsigned short>)14)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)162)) ? (((/* implicit */val<int>) (val<unsigned short>)448)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) (!((val<bool>)1))))))));
    *var_11 += ((/* implicit */val<short>) min((min((((/* implicit */val<unsigned long long int>) min(((val<unsigned short>)65520), (((/* implicit */val<unsigned short>) (val<bool>)1))))), (max((12884901888ULL), (((/* implicit */val<unsigned long long int>) var_1)))))), (((/* implicit */val<unsigned long long int>) (val<bool>)1))));
    *var_12 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_7)) ? (4294967273U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7089101042393876220LL;
bool var_5 = (bool)1;
bool var_6 = (bool)0;
unsigned long long int var_7 = 5035166282064314551ULL;
bool var_9 = (bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)62844;
short var_11 = (short)13486;
short var_12 = (short)-2454;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)62844;
    value_mismatch |= var_11 != (short)13487;
    value_mismatch |= var_12 != (short)-23;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
