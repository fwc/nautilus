/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7401
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7401
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
void test(val<int> var_0, val<signed char> var_3, val<unsigned short> var_4, val<int> zero, val<int*> var_11, val<unsigned char*> var_12, val<int*> var_13, val<short*> var_14) {
    *var_11 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<unsigned char>)42))))), (4294967271U)));
    *var_12 = ((/* implicit */val<unsigned char>) max((max((min((-1226328289198633442LL), (-1160758660636358074LL))), (((/* implicit */val<long long int>) (~(1830593140U)))))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_4)))))));
    *var_13 ^= ((/* implicit */val<int>) max(((+(6516471777746273870ULL))), (((/* implicit */val<unsigned long long int>) min(((-(3740614498U))), (((/* implicit */val<unsigned int>) var_0)))))));
    *var_14 += ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1939958696;
signed char var_3 = (signed char)33;
unsigned short var_4 = (unsigned short)13071;
int zero = 0;
int var_11 = 1471052959;
unsigned char var_12 = (unsigned char)178;
int var_13 = 317470893;
short var_14 = (short)-15486;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -25;
    value_mismatch |= var_12 != (unsigned char)139;
    value_mismatch |= var_13 != 1333853923;
    value_mismatch |= var_14 != (short)-15453;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, zero, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
