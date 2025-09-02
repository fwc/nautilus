/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9147
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9147
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
void test(val<unsigned short> var_0, val<bool> var_2, val<unsigned short> var_4, val<unsigned short> var_5, val<int> zero, val<unsigned int*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_0)))) != (max((((/* implicit */val<unsigned long long int>) 362931300)), (14481981108729676498ULL)))))), (min((((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_4)) != (((/* implicit */val<int>) var_5))))), (min(((val<unsigned short>)65523), (((/* implicit */val<unsigned short>) var_2))))))));
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) -1127004662)) | (4294967295U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10916;
bool var_2 = (bool)1;
unsigned short var_4 = (unsigned short)17321;
unsigned short var_5 = (unsigned short)76;
int zero = 0;
unsigned int var_10 = 2322101856U;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1U;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
