/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9685
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9685
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
void test(val<unsigned char> var_0, val<unsigned short> var_4, val<signed char> var_6, val<unsigned short> var_7, val<unsigned short> var_9, val<int> var_10, val<int> var_13, val<int> zero, val<unsigned char*> var_18, val<short*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) max((min((var_9), (((/* implicit */val<unsigned short>) var_0)))), (((/* implicit */val<unsigned short>) var_6)))))) & ((-9223372036854775807LL - 1LL))));
    if (((/* implicit */val<bool>) ((min(((((-9223372036854775807LL - 1LL)) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_0)) : (var_13)))))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_10)))))))
    {
        *var_19 = ((/* implicit */val<short>) var_0);
        *var_20 -= ((/* implicit */val<bool>) var_7);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned short var_4 = (unsigned short)18679;
signed char var_6 = (signed char)-77;
unsigned short var_7 = (unsigned short)11956;
unsigned short var_9 = (unsigned short)43438;
int var_10 = -1366123355;
int var_13 = 2124980425;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
short var_19 = (short)30468;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (short)30468;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_6, var_7, var_9, var_10, var_13, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
