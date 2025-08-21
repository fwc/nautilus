/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 677
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=677
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
void test(val<unsigned char> var_3, val<unsigned long long int> var_7, val<long long int> var_13, val<int> zero, val<short*> var_15, val<short*> var_16, val<unsigned short*> var_17) {
    *var_15 = ((/* implicit */val<short>) ((min((((((/* implicit */val<bool>) 1717842872U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (431233580U))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 1717842872U)) ? (((/* implicit */val<int>) (val<short>)-5944)) : (((/* implicit */val<int>) (val<unsigned char>)201))))))) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)-57)))));
    *var_16 = ((/* implicit */val<short>) var_13);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)-5944)) ? (1136629359U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))) == (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)157;
unsigned long long int var_7 = 15776263929293192720ULL;
long long int var_13 = -7334740595353238733LL;
int zero = 0;
short var_15 = (short)2326;
short var_16 = (short)-23251;
unsigned short var_17 = (unsigned short)28377;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (short)17203;
    value_mismatch |= var_17 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
