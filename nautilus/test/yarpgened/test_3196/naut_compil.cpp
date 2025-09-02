/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3196
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3196
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
void test(val<unsigned int> var_4, val<bool> var_6, val<unsigned char> var_8, val<int> var_9, val<long long int> var_13, val<int> zero, val<unsigned int*> var_18, val<long long int*> var_19, val<unsigned short*> var_20, val<unsigned int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_6))));
    *var_19 = ((/* implicit */val<long long int>) var_4);
    *var_20 |= ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_8))))), (var_4)))), ((-(var_13)))));
    *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) ((val<long long int>) var_9)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3174117074U;
bool var_6 = (bool)0;
unsigned char var_8 = (unsigned char)234;
int var_9 = 1650797736;
long long int var_13 = 6213752078288181502LL;
int zero = 0;
unsigned int var_18 = 2384519480U;
long long int var_19 = 4723560819636371602LL;
unsigned short var_20 = (unsigned short)20854;
unsigned int var_21 = 1977025130U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294967295U;
    value_mismatch |= var_19 != 3174117074LL;
    value_mismatch |= var_20 != (unsigned short)63350;
    value_mismatch |= var_21 != 1650797736U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_13, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
