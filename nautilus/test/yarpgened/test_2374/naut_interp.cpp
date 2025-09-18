/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2374
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2374
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
void test(val<bool> var_2, val<short> var_3, val<int> var_9, val<short> var_10, val<short> var_11, val<long long int> var_12, val<int> zero, val<signed char*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_2), (var_2))))) % (((((/* implicit */val<bool>) var_12)) ? (var_12) : (((/* implicit */val<long long int>) var_9)))))) : (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_2)), (((((/* implicit */val<int>) var_3)) | (((/* implicit */val<int>) var_11)))))))));
    *var_14 = ((/* implicit */val<unsigned short>) ((((((((/* implicit */val<int>) var_11)) | (((/* implicit */val<int>) (val<unsigned short>)51653)))) & (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_10))))))) >> (((((/* implicit */val<int>) var_11)) - (10216)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
short var_3 = (short)31356;
int var_9 = 1621535031;
short var_10 = (short)-27565;
short var_11 = (short)10227;
long long int var_12 = 770445581346761099LL;
int zero = 0;
signed char var_13 = (signed char)115;
unsigned short var_14 = (unsigned short)39244;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_9, var_10, var_11, var_12, zero, &var_13, &var_14);
  checksum();
}
