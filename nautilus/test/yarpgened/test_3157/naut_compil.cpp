/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3157
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3157
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
void test(val<bool> var_2, val<bool> var_3, val<unsigned char> var_4, val<short> var_6, val<unsigned short> var_7, val<short> var_9, val<signed char> var_11, val<unsigned long long int> var_13, val<int> zero, val<bool*> var_17, val<unsigned long long int*> var_18, val<unsigned short*> var_19, val<unsigned int*> var_20, val<signed char*> var_21) {
    *var_17 = ((/* implicit */val<bool>) var_9);
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<int>) ((val<signed char>) var_13))), ((-(((/* implicit */val<int>) var_7))))))))))));
    *var_19 = ((/* implicit */val<unsigned short>) max((*var_19), (((/* implicit */val<unsigned short>) var_6))));
    *var_20 = ((/* implicit */val<unsigned int>) (-(((((((/* implicit */val<bool>) var_4)) ? (2449956187537445808LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))));
    *var_21 |= ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
bool var_3 = (bool)1;
unsigned char var_4 = (unsigned char)179;
short var_6 = (short)21093;
unsigned short var_7 = (unsigned short)25678;
short var_9 = (short)24414;
signed char var_11 = (signed char)91;
unsigned long long int var_13 = 17306629643336213008ULL;
int zero = 0;
bool var_17 = (bool)1;
unsigned long long int var_18 = 9131759915307858649ULL;
unsigned short var_19 = (unsigned short)52585;
unsigned int var_20 = 960685248U;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 9131759915307858649ULL;
    value_mismatch |= var_19 != (unsigned short)52585;
    value_mismatch |= var_20 != 0U;
    value_mismatch |= var_21 != (signed char)-90;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_7, var_9, var_11, var_13, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
